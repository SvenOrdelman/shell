
// Generated from /Users/jeroen/Documents/Saxion/leerjaar 2/2.3/Compilers & Operating Systems/PearlShell/ShellGrammar.g4 by ANTLR 4.6

#pragma once


#include "antlr4-runtime.h"
#include "ShellGrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ShellGrammarParser.
 */
class  ShellGrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ShellGrammarParser.
   */
    virtual antlrcpp::Any visitLine(ShellGrammarParser::LineContext *context) = 0;

    virtual antlrcpp::Any visitCommand(ShellGrammarParser::CommandContext *context) = 0;

    virtual antlrcpp::Any visitExtra(ShellGrammarParser::ExtraContext *context) = 0;

    virtual antlrcpp::Any visitIn(ShellGrammarParser::InContext *context) = 0;

    virtual antlrcpp::Any visitOut(ShellGrammarParser::OutContext *context) = 0;

    virtual antlrcpp::Any visitErr(ShellGrammarParser::ErrContext *context) = 0;

    virtual antlrcpp::Any visitAdd(ShellGrammarParser::AddContext *context) = 0;


};

