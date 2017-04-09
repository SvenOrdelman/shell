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

    antlrcpp::Any visitExtra(ShellGrammarParser::ExtraContext *ctx) override;

    antlrcpp::Any visitInput(ShellGrammarParser::InputContext *ctx) override;

    antlrcpp::Any visitOutput(ShellGrammarParser::OutputContext *ctx) override;

    int change_working_directory(std::vector<std::string>* list);

    void execute(std::vector<ShellGrammarParser::CommandContext *>* programs);
};


#endif //SHELL_PEARLVISITOR_H
