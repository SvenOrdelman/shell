//
// Created by sven on 31-3-17.
//

#include <unistd.h>
#include <wait.h>
#include "PearlVisitor.h"

using namespace std;

// program directory
const string bin = "/bin/";

string program;
string parameter;

vector<string> parameters;

int change_working_directory(vector<string>* list);
void execute(vector<string>* params);

antlrcpp::Any PearlVisitor::visitLine(ShellGrammarParser::LineContext *ctx) {

    // visit all commands one by one from the end to the front
    vector<antlr4::tree::ParseTree*> children = ctx->children;

    int c = (int) children.size();
    for (vector<antlr4::tree::ParseTree*>::const_reverse_iterator i = children.crbegin(); i != children.crend(); ++i)
    {
        // let the command gather the info
        visit(*i);

        if (program == "cd") {
            int result = change_working_directory(&parameters);
            if (result == -1)
            {
                cerr << "Directory not found. " << endl;
            }
            break;
        }

        int pid = fork();
        // first command
        if (pid == 0) {
            for (;;) {
                --c;

                // if not the last command
                if (c > 0) {

                }

                string path = bin + program;

                // get the arguments
                char *cargs[parameters.size() + 2];
                int a = 0;
                cargs[a] = (char *) path.c_str();
                for (vector<string>::const_iterator j = parameters.cbegin(); j != parameters.cend(); ++j) {
                    ++a;
                    cargs[a] = (char *) (*j).c_str();
                }
                cargs[a + 1] = NULL;

                // execute the program
                execvp(cargs[0], cargs);
                cerr << "No program '" << program << "' found." << endl;
                exit(0);
                // unreachable
            }
        }
        parameters.clear();

        // parent
        waitpid(pid, 0, 0);
        break;
    }

    return true;
}

void execute(vector<string>* params) {
    int pid = fork();



    if (pid == 0) {
        // second command
        execute(params);
    }
}

antlrcpp::Any PearlVisitor::visitCommand(ShellGrammarParser::CommandContext *ctx) {
    program = ctx->p->getText();

    antlrcpp::Any any = visitChildren(ctx);

    return any;
}

antlrcpp::Any PearlVisitor::visitExtra(ShellGrammarParser::ExtraContext *ctx) {
    parameters.push_back(ctx->p->getText());
    return ShellGrammarBaseVisitor::visitExtra(ctx);
}

antlrcpp::Any PearlVisitor::visitInput(ShellGrammarParser::InputContext *ctx) {
    cout << "Input?: " << parameter << endl;
    return ShellGrammarBaseVisitor::visitInput(ctx);
}

antlrcpp::Any PearlVisitor::visitOutput(ShellGrammarParser::OutputContext *ctx) {
    cout << "Output?: " << parameter << endl;
    return ShellGrammarBaseVisitor::visitOutput(ctx);
}

int change_working_directory(vector<string>* ls) {
    int result = -1;
    if (ls->size() > 0) {
        result = chdir(ls->back().c_str());
        ls->pop_back();
    }
    return result;
}