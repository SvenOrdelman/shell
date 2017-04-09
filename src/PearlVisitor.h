//
// Created by sven on 31-3-17.
//

#ifndef SHELL_PEARLVISITOR_H
#define SHELL_PEARLVISITOR_H

#include "../gen/ShellGrammarBaseVisitor.h"

class PearlVisitor : public ShellGrammarBaseVisitor
{

public:
    antlrcpp::Any visitLine(ShellGrammarParser::LineContext *ctx) override;

    antlrcpp::Any visitCommand(ShellGrammarParser::CommandContext *ctx) override;

    antlrcpp::Any visitExtra(ShellGrammarParser::ExtraContext *ctx) override;

    antlrcpp::Any visitIn(ShellGrammarParser::InContext *ctx) override;

    antlrcpp::Any visitOut(ShellGrammarParser::OutContext *ctx) override;

    antlrcpp::Any visitErr(ShellGrammarParser::ErrContext *ctx) override;

    antlrcpp::Any visitAdd(ShellGrammarParser::AddContext *ctx) override;

    int change_working_directory(std::vector<std::string> *list);

    void execute(std::vector<ShellGrammarParser::CommandContext *> *programs);

    void io_in();

    void io_out();

    void io_err();

    void io_add();
};


#endif //SHELL_PEARLVISITOR_H
