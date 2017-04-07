//
// Created by sven on 31-3-17.
//

#include <unistd.h>
#include <wait.h>
#include "PearlVisitor.h"

using namespace std;

// program directory
const string bin = "/bin/";

vector<string> parameters;

antlrcpp::Any PearlVisitor::visitLine(ShellGrammarParser::LineContext *ctx)
{
    // get all the commands
    vector<antlr4::tree::ParseTree *> programs = ctx->children;

    // check to see if it is a cd before we do anything else
    string &program = visit(programs.back()).as<string>();

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
            waitpid(pid, 0, 0);
        }
    }
    return true;
}

void PearlVisitor::execute(vector<antlr4::tree::ParseTree *> *programs)
{

    // let the command gather the info
    string &program = visit(programs->back()).as<string>();
    programs->pop_back();

    cout << "program: " << program << " programs size: " << programs->size() << " params size: " << parameters.size() << endl;

    // if this program was not the last program
    if (programs->size() > 0)
    {
        // create a pipe
        int pipeline[2];
        pipe(pipeline);

        cout << "pipeline! 0: " << pipeline[0] << " 1: " << pipeline[1] << endl;

        int pid = fork();
        if (pid == 0)
        {
            cout << "write side set!" << endl;
            // let the write side be connected to the first command
            dup2(pipeline[1], 1);
            close(pipeline[0]);
            close(pipeline[1]);

            parameters.clear();
            execute(programs);
        } else {
            cout << "read side set!" << endl;

            // let the read side be connected to the second command
            dup2(pipeline[0], 0);
            close(pipeline[0]);
            close(pipeline[1]);
        }
    }

    string path = bin + program;

    // get the arguments
    char *cargs[parameters.size() + 2];
    int a = 0;
    cargs[a] = (char *) path.c_str();
    for (vector<string>::const_iterator j = parameters.cbegin(); j != parameters.cend(); ++j)
    {
        ++a;
        cargs[a] = (char *) (*j).c_str();
    }
    cargs[a + 1] = NULL;

    // execute the program
    execvp(cargs[0], cargs);
    cerr << "No program '" << program << "' found." << endl;
    exit(0);
}

antlrcpp::Any PearlVisitor::visitCommand(ShellGrammarParser::CommandContext *ctx)
{
    visitChildren(ctx);
    return ctx->p->getText();
}

antlrcpp::Any PearlVisitor::visitExtra(ShellGrammarParser::ExtraContext *ctx)
{
    parameters.push_back(ctx->p->getText());
    return ShellGrammarBaseVisitor::visitExtra(ctx);
}

antlrcpp::Any PearlVisitor::visitInput(ShellGrammarParser::InputContext *ctx)
{
    cout << "Input?: " << endl;
    return ShellGrammarBaseVisitor::visitInput(ctx);
}

antlrcpp::Any PearlVisitor::visitOutput(ShellGrammarParser::OutputContext *ctx)
{
    cout << "Output?: " << endl;
    return ShellGrammarBaseVisitor::visitOutput(ctx);
}

int PearlVisitor::change_working_directory(vector<string> *ls)
{
    int result = -1;
    if (ls->size() > 0)
    {
        result = chdir(ls->back().c_str());
        ls->pop_back();
    }
    return result;
}