//
// Created by sven on 31-3-17.
//

#ifndef SHELL_PEARLVISITOR_H
#define SHELL_PEARLVISITOR_H

#include "../gen/ShellGrammarBaseVisitor.h"

class PearlVisitor : public ShellGrammarBaseVisitor{

public:
    antlrcpp::Any visitLine(ShellGrammarParser::LineContext *ctx) override;

    antlrcpp::Any visitCommand(ShellGrammarParser::CommandContext *ctx) override;

    antlrcpp::Any visitProgram(ShellGrammarParser::ProgramContext *ctx) override;

    antlrcpp::Any visitFlag(ShellGrammarParser::FlagContext *ctx) override;

    antlrcpp::Any visitParameter(ShellGrammarParser::ParameterContext *ctx) override;
};


#endif //SHELL_PEARLVISITOR_H
