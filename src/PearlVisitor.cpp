//
// Created by sven on 31-3-17.
//

#include "PearlVisitor.h"

antlrcpp::Any PearlVisitor::visitLine(ShellGrammarParser::LineContext *ctx) {
    return ShellGrammarBaseVisitor::visitLine(ctx);
}

antlrcpp::Any PearlVisitor::visitCommand(ShellGrammarParser::CommandContext *ctx) {
    return ShellGrammarBaseVisitor::visitCommand(ctx);
}

antlrcpp::Any PearlVisitor::visitProgram(ShellGrammarParser::ProgramContext *ctx) {
    return ShellGrammarBaseVisitor::visitProgram(ctx);
}

antlrcpp::Any PearlVisitor::visitFlag(ShellGrammarParser::FlagContext *ctx) {
    return ShellGrammarBaseVisitor::visitFlag(ctx);
}

antlrcpp::Any PearlVisitor::visitParameter(ShellGrammarParser::ParameterContext *ctx) {
    return ShellGrammarBaseVisitor::visitParameter(ctx);
}
