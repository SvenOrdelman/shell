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
    int l = children.size();
//    for (std::vector<antlr4::tree::ParseTree*>::const_reverse_iterator i = children.crbegin(); i != children.crend(); ++i)
//    {
//        std::vector<std::string> args = visit(*i);
//
        int pid = fork();
        // child
        if (pid == 0)
        {
            l --;
            if(l!=0){
                int pid = fork();

            }

            char *cargs[args.size() + 1];
            int c = 0;
            for (std::vector<std::string>::const_iterator j = args.cbegin(); j != args.cend(); ++j)
            {
                cargs[c] = (char *) (*j).c_str();
                ++c;
            }
            cargs[c] = NULL;

            // execute the program
            execvp(cargs[0], cargs);
            std::cerr << "No program '" << program << "' found." << std::endl;
            exit(0);
        }

        // parent
        waitpid(pid, 0, 0);
        //break;
   // }

    return true;
}

antlrcpp::Any PearlVisitor::visitCommand(ShellGrammarParser::CommandContext *ctx) {

    antlrcpp::Any any = visitChildren(ctx);

    if (program == "cd") {
        int result = change_working_directory(&parameters);
        if (result == -1)
        {
            std::cerr << "Directory not found. " << std::endl;
        }
        return any;
    }

    // get the whole command
    std::vector<std::string> args;
    args.reserve(parameters.size() + 2);
    args.push_back(bin.append(program).c_str());
    for (std::list<std::string>::const_iterator i = parameters.cbegin(); i != parameters.cend(); ++i)
    {
        args.push_back(*i);
    }
    parameters.clear();

    return args;
}

antlrcpp::Any PearlVisitor::visitExtra(ShellGrammarParser::ExtraContext *ctx) {
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