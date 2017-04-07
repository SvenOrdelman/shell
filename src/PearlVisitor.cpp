//
// Created by sven on 31-3-17.
//

#include <unistd.h>
#include <wait.h>
#include "PearlVisitor.h"

std::string bin = "/bin/";

int file_descriptor;

std::string program;
std::string parameter;

std::list<std::string> parameters;

bool pipeline;
int direction = 0;

int change_working_directory(std::list<std::string>* list);

antlrcpp::Any PearlVisitor::visitLine(ShellGrammarParser::LineContext *ctx) {

    // visit all commands one by one from the end to the front
    std::vector<antlr4::tree::ParseTree*> children = ctx->children;

    int c = (int) children.size();
    for (std::vector<antlr4::tree::ParseTree*>::const_reverse_iterator i = children.crbegin(); i != children.crend(); ++i)
    {
        --c;

        // let the command gather the info
        visit(*i);

        int pid = fork();
        // first command
        if (pid == 0) {
            // if not the last command
//            if (c > 0) {
//                int pid_c = fork();
//
//                if (pid_c == 0) {
//                    // second command
//                    continue;
//                }
//            }

            std::string path = bin + program;

            // get the arguments
            char *cargs[parameters.size() + 2];
            int a = 0;
            cargs[a] = (char *) path.c_str();
            for (std::list<std::string>::const_iterator j = parameters.cbegin(); j != parameters.cend(); ++j)
            {
                ++a;
                cargs[a] = (char *) (*j).c_str();
            }
            cargs[a + 1] = NULL;

            // execute the program
            execvp(cargs[0], cargs);
            std::cerr << "No program '" << cargs[0] << "' found." << std::endl;
            exit(0);
            // unreachable
        }
        parameters.clear();

        // parent
        waitpid(pid, 0, 0);
        break;
    }

    return true;
}

antlrcpp::Any PearlVisitor::visitCommand(ShellGrammarParser::CommandContext *ctx) {
    program = ctx->p->getText();

    antlrcpp::Any any = visitChildren(ctx);

    if (program == "cd") {
        int result = change_working_directory(&parameters);
        if (result == -1)
        {
            std::cerr << "Directory not found. " << std::endl;
        }
        return any;
    }

    return any;
}

antlrcpp::Any PearlVisitor::visitExtra(ShellGrammarParser::ExtraContext *ctx) {
    parameters.push_back(ctx->p->getText());
    return ShellGrammarBaseVisitor::visitExtra(ctx);
}

antlrcpp::Any PearlVisitor::visitInput(ShellGrammarParser::InputContext *ctx) {
    std::cout << "Input?: " << parameter << std::endl;
    direction = -1;
    return ShellGrammarBaseVisitor::visitInput(ctx);
}

antlrcpp::Any PearlVisitor::visitOutput(ShellGrammarParser::OutputContext *ctx) {
    std::cout << "Output?: " << parameter << std::endl;
    direction = 1;
    return ShellGrammarBaseVisitor::visitOutput(ctx);
}

int change_working_directory(std::list<std::string>* list) {
    int result = -1;
    if (list->size() > 0) {
        result = chdir(list->back().c_str());
        list->pop_back();
    }
    return result;
}