//
// Created by sven on 31-3-17.
//

#include "PearlVisitor.h"

antlrcpp::Any PearlVisitor::visitLine(ShellGrammarParser::LineContext *ctx) {
    std::cout << "Line: " << ctx->getText() << std::endl;
    return ShellGrammarBaseVisitor::visitLine(ctx);
}

antlrcpp::Any PearlVisitor::visitCommand(ShellGrammarParser::CommandContext *ctx) {
    std::cout << "Command: " << ctx->getText() << std::endl;
    return ShellGrammarBaseVisitor::visitCommand(ctx);
}

antlrcpp::Any PearlVisitor::visitProgram(ShellGrammarParser::ProgramContext *ctx) {
    std::cout << "Program: " << ctx->getText() << std::endl;



    return ShellGrammarBaseVisitor::visitProgram(ctx);
}

antlrcpp::Any PearlVisitor::visitFlag(ShellGrammarParser::FlagContext *ctx) {
    std::cout << "Flag: " << ctx->getText() << std::endl;
    return ShellGrammarBaseVisitor::visitFlag(ctx);
}

antlrcpp::Any PearlVisitor::visitParameter(ShellGrammarParser::ParameterContext *ctx) {
    std::cout << "Parameter: " << ctx->getText() << std::endl;
    return ShellGrammarBaseVisitor::visitParameter(ctx);
}
