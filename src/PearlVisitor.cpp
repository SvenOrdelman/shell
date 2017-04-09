//
// Created by Jeroen Smienk on 31-3-17.
//

#include <unistd.h>
#include <fcntl.h>
#include <wait.h>
#include "PearlVisitor.h"

using namespace std;

// program name to execute
string program;
// list of parameters for a program
vector<string> parameters;

// paths to redirect several streams to
string io_in_path = "";
string io_out_path = "";
string io_err_path = "";
string io_add_path = "";

/*
 * Visit a line which can consist of a program or one or more pipelines
 */
antlrcpp::Any PearlVisitor::visitLine(ShellGrammarParser::LineContext *ctx)
{
    // get all the commands
    vector<ShellGrammarParser::CommandContext *> programs = ctx->command();

    // check to see if it is a cd before we do anything else
    visit(programs.back());

    if (program == "cd")
    {
        int result = change_working_directory(&parameters);
        if (result == -1)
        {
            cerr << "Directory not found." << endl;
        }
    }
    else
    {
        // other program than cd
        int pid = fork();
        if (pid == 0) {
            // execute the program (or more)
            execute(&programs);
        } else {
            // shell thread

            // wait if there is no '&' at the end
            if (ctx->bkg == nullptr)
            {
                waitpid(pid, 0, 0);
            }
        }
    }
    return nullptr;
}

void PearlVisitor::execute(vector<ShellGrammarParser::CommandContext *> *programs)
{
    reset_visits();
    // let the command gather the info
    visit(programs->back());
    // remove the command from the list
    programs->pop_back();

    // if this program was not the last program
    if (programs->size() > 0)
    {
        // create a pipe
        int pipeline[2];
        pipe(pipeline);

        int pid = fork();
        if (pid == 0)
        {
            // let the write side be connected to the first command
            dup2(pipeline[1], 1);
            close(pipeline[0]);
            close(pipeline[1]);

            execute(programs);
        } else {
            // let the read side be connected to the second command
            dup2(pipeline[0], 0);
            close(pipeline[0]);
            close(pipeline[1]);
        }
    }

    // set up IO redirects if any
    io_in();
    io_out();
    io_err();
    io_add();

    // get the arguments
    char *p_args[parameters.size() + 2];
    int a = 0;
    p_args[a] = (char *) program.c_str();
    for (vector<string>::const_iterator j = parameters.cbegin(); j != parameters.cend(); ++j)
    {
        ++a;
        p_args[a] = (char *) (*j).c_str();
    }
    p_args[a + 1] = NULL;

    // try to execute the program
    execvp(p_args[0], p_args);

    cerr << "No program '" << program << "' found." << endl;
    exit(0);
}

/*
 * Set the program name
 */
antlrcpp::Any PearlVisitor::visitCommand(ShellGrammarParser::CommandContext *ctx)
{
    visitChildren(ctx);
    program = ctx->p->getText();
    return nullptr;
}

/*
 * Add a parameter to the parameters list
 */
antlrcpp::Any PearlVisitor::visitExtra(ShellGrammarParser::ExtraContext *ctx)
{
    parameters.push_back(ctx->p->getText());
    return nullptr;
}

/*
 * Change the current working directory to a path
 */
int PearlVisitor::change_working_directory(vector<string> *ls)
{
    int result;
    if (ls->size() > 0)
    {
        result = chdir(ls->back().c_str());
        ls->pop_back();
    }
    else
    {
        result = chdir("/");
    }
    return result;
}

/*
 * Set the input stream redirection path
 */
antlrcpp::Any PearlVisitor::visitIn(ShellGrammarParser::InContext *ctx)
{
    return io_in_path = ctx->path->getText();
}

/*
 * Set the output stream redirection path (override)
 */
antlrcpp::Any PearlVisitor::visitOut(ShellGrammarParser::OutContext *ctx)
{
    return io_out_path = ctx->path->getText();
}

/*
 * Set the error stream redirection path
 */
antlrcpp::Any PearlVisitor::visitErr(ShellGrammarParser::ErrContext *ctx)
{
    return io_err_path = ctx->path->getText();
}

/*
 * Set the output stream redirection path (append)
 */
antlrcpp::Any PearlVisitor::visitAdd(ShellGrammarParser::AddContext *ctx)
{
    return io_add_path = ctx->path->getText();
}

/*
 * Redirects input stream from a path
 */
void PearlVisitor::io_in()
{
    if (io_in_path != "")
    {
        // READ ONLY and CLOSE AFTER EXECUTION flags
        int file_descriptor_in = open(io_in_path.c_str(), O_RDONLY | O_CLOEXEC);
        if (file_descriptor_in != -1)
        {
            // redirect std::in to the file descriptor
            dup2(file_descriptor_in, 0);
            close(file_descriptor_in);
        }
    }
}

/*
 * Redirects output stream to a path and override it
 */
void PearlVisitor::io_out()
{
    if (io_out_path != "")
    {
        // WRITE, CREATE, TRUNCATE and CLOSE AFTER EXECUTION flags
        int file_descriptor_out = open(io_out_path.c_str(), O_WRONLY | O_TRUNC | O_CREAT | O_CLOEXEC);
        if (file_descriptor_out != -1)
        {
            // redirect std::out to the file descriptor
            dup2(file_descriptor_out, 1);
            close(file_descriptor_out);
        }
    }
}

/*
 * Redirects error stream to a path
 */
void PearlVisitor::io_err()
{
    if (io_err_path != "")
    {
        // WRITE, CREATE, TRUNCATE and CLOSE AFTER EXECUTION flags
        int file_descriptor_err = open(io_err_path.c_str(), O_WRONLY | O_TRUNC | O_CREAT | O_CLOEXEC);
        if (file_descriptor_err != -1)
        {
            // redirect std::err to the file descriptor
            dup2(file_descriptor_err, 2);
            close(file_descriptor_err);
        }
    }
}

/*
 * Redirects output stream to a path and appends it
 */
void PearlVisitor::io_add()
{
    if (io_add_path != "")
    {
        // WRITE, CREATE, TRUNCATE, APPEND and CLOSE AFTER EXECUTION flags
        int file_descriptor_add = open(io_add_path.c_str(), O_APPEND | O_WRONLY | O_CREAT | O_CLOEXEC);
        if (file_descriptor_add != -1)
        {
            // redirect std::out to the file descriptor
            dup2(file_descriptor_add, 1);
            close(file_descriptor_add);
        }
    }
}

/*
 * Resets the gathered information by a previous command visit
 */
void PearlVisitor::reset_visits()
{
    parameters.clear();
    io_in_path = "";
    io_out_path = "";
    io_err_path = "";
    io_add_path = "";
}