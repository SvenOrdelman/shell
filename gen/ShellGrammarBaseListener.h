
// Generated from /Users/jeroen/Documents/Saxion/leerjaar 2/2.3/Compilers & Operating Systems/PearlShell/ShellGrammar.g4 by ANTLR 4.6

#pragma once


#include "antlr4-runtime.h"
#include "ShellGrammarListener.h"


/**
 * This class provides an empty implementation of ShellGrammarListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ShellGrammarBaseListener : public ShellGrammarListener {
public:

  virtual void enterLine(ShellGrammarParser::LineContext * /*ctx*/) override { }
  virtual void exitLine(ShellGrammarParser::LineContext * /*ctx*/) override { }

  virtual void enterCommand(ShellGrammarParser::CommandContext * /*ctx*/) override { }
  virtual void exitCommand(ShellGrammarParser::CommandContext * /*ctx*/) override { }

  virtual void enterExtra(ShellGrammarParser::ExtraContext * /*ctx*/) override { }
  virtual void exitExtra(ShellGrammarParser::ExtraContext * /*ctx*/) override { }

  virtual void enterIn(ShellGrammarParser::InContext * /*ctx*/) override { }
  virtual void exitIn(ShellGrammarParser::InContext * /*ctx*/) override { }

  virtual void enterOut(ShellGrammarParser::OutContext * /*ctx*/) override { }
  virtual void exitOut(ShellGrammarParser::OutContext * /*ctx*/) override { }

  virtual void enterErr(ShellGrammarParser::ErrContext * /*ctx*/) override { }
  virtual void exitErr(ShellGrammarParser::ErrContext * /*ctx*/) override { }

  virtual void enterAdd(ShellGrammarParser::AddContext * /*ctx*/) override { }
  virtual void exitAdd(ShellGrammarParser::AddContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

