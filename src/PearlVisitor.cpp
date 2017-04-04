//
// Created by sven on 31-3-17.
//

#include <unistd.h>
#include <wait.h>
#include "PearlVisitor.h"

int file_descriptor;

std::string program;
std::string flag;
std::string parameter;

std::list<std::string> flags;
std::list<std::string> parameters;

bool pipeline;
int direction = 0;

int change_working_directory(std::list<std::string>* list);

antlrcpp::Any PearlVisitor::visitLine(ShellGrammarParser::LineContext *ctx) {
//    std::cout << "Line: " << ctx->getText() << std::endl;

    antlrcpp::Any any = visitChildren(ctx);

    return any;
}

antlrcpp::Any PearlVisitor::visitCommand(ShellGrammarParser::CommandContext *ctx) {
//    std::cout << "Command: " << ctx->getText() << std::endl;

    antlrcpp::Any any = visitChildren(ctx);

    if (program == "cd") {
        int result = change_working_directory(&parameters);
        if (result == -1)
        {
            std::cerr << "Directory not found. " << std::endl;
        }
        return any;
    }

    int pid = fork();
    std::string bin = "/bin/";

    if (pid == 0)
    {
        if (parameters.size() == 0)
        {
            execl(bin.append(program).c_str(), program.c_str(), NULL);
        }
        else
        {
            char *args[parameters.size() + 2];
            args[0] = (char *) bin.append(program).c_str();

            int c = 0;
            for (std::list<std::string>::const_iterator i = parameters.cbegin(); i != parameters.cend(); ++i)
            {
                ++c;
                args[c] = (char *) i->c_str();
            }

            args[c + 1] = NULL;

            execvp(args[0], args);
        }
        std::cerr << "No program '" << program << "' found." << std::endl;
        exit(0);
    }

    waitpid(pid, 0, 0);
    parameters.clear();

    return any;
}

antlrcpp::Any PearlVisitor::visitProgram(ShellGrammarParser::ProgramContext *ctx) {
    program = ctx->getText();
    return ShellGrammarBaseVisitor::visitProgram(ctx);
}

antlrcpp::Any PearlVisitor::visitFlag(ShellGrammarParser::FlagContext *ctx) {
//    std::cout << "Flag: " << ctx->getText() << std::endl;
    return ShellGrammarBaseVisitor::visitFlag(ctx);
}

antlrcpp::Any PearlVisitor::visitParameter(ShellGrammarParser::ParameterContext *ctx) {
    parameter = ctx->getText();

    parameters.push_back(parameter);

    return ShellGrammarBaseVisitor::visitParameter(ctx);
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