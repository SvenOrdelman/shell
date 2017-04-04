//
// Created by sven on 31-3-17.
//

#include <unistd.h>
#include <fcntl.h>
#include <wait.h>
#include "PearlVisitor.h"

int file_descriptor;

std::string program;
std::string flag;
std::string parameter;

antlrcpp::Any PearlVisitor::visitLine(ShellGrammarParser::LineContext *ctx) {
//    std::cout << "Line: " << ctx->getText() << std::endl;
    return ShellGrammarBaseVisitor::visitLine(ctx);
}

antlrcpp::Any PearlVisitor::visitCommand(ShellGrammarParser::CommandContext *ctx) {
//    std::cout << "Command: " << ctx->getText() << std::endl;
    return ShellGrammarBaseVisitor::visitCommand(ctx);
}

antlrcpp::Any PearlVisitor::visitProgram(ShellGrammarParser::ProgramContext *ctx) {
    program = ctx->getText();
//    std::cout << "Program: " << ctx->getText() << std::endl;

    if (program != "cat")
    {
        int pid = fork();
        std::string d = "/bin/";

        if (pid == 0)
        {
            execl(d.append(program).c_str(), program.c_str(), NULL);
            std::cout << "No program '" << program << "' found." << std::endl;
        }
        else
        {
            waitpid(pid, 0, 0);
        }
    }

    return ShellGrammarBaseVisitor::visitProgram(ctx);
}

antlrcpp::Any PearlVisitor::visitFlag(ShellGrammarParser::FlagContext *ctx) {
    std::cout << "Flag: " << ctx->getText() << std::endl;
    return ShellGrammarBaseVisitor::visitFlag(ctx);
}

antlrcpp::Any PearlVisitor::visitParameter(ShellGrammarParser::ParameterContext *ctx) {
    parameter = ctx->getText();
//    std::cout << "Parameter: " << parameter << std::endl;

    if (program == "cat")
    {
        file_descriptor = open(parameter.c_str(), O_RDONLY);
        if (file_descriptor != -1)
        {

            char buffer[512];
            size_t read_size = 1;
            while (read_size > 0) {
                read_size = (size_t) read(file_descriptor, buffer, 512);
                write(1, buffer, read_size);
            }
            std::cout << std::endl;
        }
        else
        {
            std::cout << "File '" << parameter << "' not found." << std::endl;
        }
    }

    return ShellGrammarBaseVisitor::visitParameter(ctx);
}

antlrcpp::Any PearlVisitor::visitExtra(ShellGrammarParser::ExtraContext *ctx) {
    return ShellGrammarBaseVisitor::visitExtra(ctx);
}

antlrcpp::Any PearlVisitor::visitInput(ShellGrammarParser::InputContext *ctx) {
    std::cout << "Input?: " << parameter << std::endl;

    return ShellGrammarBaseVisitor::visitInput(ctx);
}

antlrcpp::Any PearlVisitor::visitOutput(ShellGrammarParser::OutputContext *ctx) {
    std::cout << "Output?: " << parameter << std::endl;

    return ShellGrammarBaseVisitor::visitOutput(ctx);
}
