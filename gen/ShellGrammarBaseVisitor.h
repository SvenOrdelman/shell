
// Generated from /home/jeroen/CLionProjects/Pearl/ShellGrammar.g4 by ANTLR 4.6

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

  virtual antlrcpp::Any visitProgram(ShellGrammarParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFlag(ShellGrammarParser::FlagContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter(ShellGrammarParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }


};

