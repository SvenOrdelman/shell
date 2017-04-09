//
// Created by sven on 31-3-17.
//

#include <unistd.h>
#include <fcntl.h>
//#include <wait.h>
#include "PearlVisitor.h"

using namespace std;

string program;
vector<string> parameters;

string io_in_path = "";
string io_out_path = "";
string io_err_path = "";
string io_add_path = "";

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

            // wait if no '&'
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

    // let the command gather the info
    parameters.clear();
    visit(programs->back());
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

antlrcpp::Any PearlVisitor::visitCommand(ShellGrammarParser::CommandContext *ctx)
{
    visitChildren(ctx);
    program = ctx->p->getText();
    return nullptr;
}

antlrcpp::Any PearlVisitor::visitExtra(ShellGrammarParser::ExtraContext *ctx)
{
    parameters.push_back(ctx->p->getText());
    return nullptr;
}

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

antlrcpp::Any PearlVisitor::visitIn(ShellGrammarParser::InContext *ctx)
{
    return io_in_path = ctx->path->getText();
}

antlrcpp::Any PearlVisitor::visitOut(ShellGrammarParser::OutContext *ctx)
{
    return io_out_path = ctx->path->getText();
}

antlrcpp::Any PearlVisitor::visitErr(ShellGrammarParser::ErrContext *ctx)
{
    return io_err_path = ctx->path->getText();
}

antlrcpp::Any PearlVisitor::visitAdd(ShellGrammarParser::AddContext *ctx)
{
    return io_add_path = ctx->path->getText();
}

void PearlVisitor::io_in()
{
    if (io_in_path != "")
    {
        int file_descriptor_in = open(io_in_path.c_str(), O_RDONLY | O_CLOEXEC);
        io_in_path = "";
        if (file_descriptor_in != -1)
        {
            dup2(file_descriptor_in, 0);
            close(file_descriptor_in);
        }
    }
}

void PearlVisitor::io_out()
{
    if (io_out_path != "")
    {
        int file_descriptor_out = open(io_out_path.c_str(), O_WRONLY | O_CREAT | O_CLOEXEC);
        io_out_path = "";
        if (file_descriptor_out != -1)
        {
            dup2(file_descriptor_out, 1);
            close(file_descriptor_out);
        }
    }
}

void PearlVisitor::io_err()
{
    if (io_err_path != "")
    {
        int file_descriptor_err = open(io_err_path.c_str(), O_WRONLY | O_CREAT | O_CLOEXEC);
        io_err_path = "";
        if (file_descriptor_err != -1)
        {
            dup2(file_descriptor_err, 2);
            close(file_descriptor_err);
        }
    }
}

void PearlVisitor::io_add()
{
    if (io_add_path != "")
    {
        int file_descriptor_add = open(io_add_path.c_str(), O_APPEND | O_WRONLY | O_CREAT | O_CLOEXEC);
        io_add_path = "";
        if (file_descriptor_add != -1)
        {
            dup2(file_descriptor_add, 1);
            close(file_descriptor_add);
        }
    }
}