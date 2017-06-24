
// Generated from /Users/jeroen/Documents/Saxion/leerjaar 2/2.3/Compilers & Operating Systems/PearlShell/ShellGrammar.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "ShellGrammarVisitor.h"


/**
 * This class provides an empty implementation of ShellGrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ShellGrammarBaseVisitor : public ShellGrammarVisitor {
public:

  virtual antlrcpp::Any visitLine(ShellGrammarParser::LineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommand(ShellGrammarParser::CommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExtra(ShellGrammarParser::ExtraContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIn(ShellGrammarParser::InContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOut(ShellGrammarParser::OutContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitErr(ShellGrammarParser::ErrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd(ShellGrammarParser::AddContext *ctx) override {
    return visitChildren(ctx);
  }


};

