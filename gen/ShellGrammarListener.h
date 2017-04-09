
// Generated from /Users/jeroen/Documents/Saxion/leerjaar 2/2.3/Compilers & Operating Systems/PearlShell/ShellGrammar.g4 by ANTLR 4.6

#pragma once


#include "antlr4-runtime.h"
#include "ShellGrammarParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ShellGrammarParser.
 */
class  ShellGrammarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterLine(ShellGrammarParser::LineContext *ctx) = 0;
  virtual void exitLine(ShellGrammarParser::LineContext *ctx) = 0;

  virtual void enterCommand(ShellGrammarParser::CommandContext *ctx) = 0;
  virtual void exitCommand(ShellGrammarParser::CommandContext *ctx) = 0;

  virtual void enterExtra(ShellGrammarParser::ExtraContext *ctx) = 0;
  virtual void exitExtra(ShellGrammarParser::ExtraContext *ctx) = 0;

  virtual void enterInput(ShellGrammarParser::InputContext *ctx) = 0;
  virtual void exitInput(ShellGrammarParser::InputContext *ctx) = 0;

  virtual void enterOutput(ShellGrammarParser::OutputContext *ctx) = 0;
  virtual void exitOutput(ShellGrammarParser::OutputContext *ctx) = 0;


};

