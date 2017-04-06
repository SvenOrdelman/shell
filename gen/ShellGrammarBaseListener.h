
// Generated from /home/jeroen/CLionProjects/RealPearlShell/ShellGrammar.g4 by ANTLR 4.6

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

  virtual void enterProgram(ShellGrammarParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(ShellGrammarParser::ProgramContext * /*ctx*/) override { }

  virtual void enterParameter(ShellGrammarParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(ShellGrammarParser::ParameterContext * /*ctx*/) override { }

  virtual void enterInput(ShellGrammarParser::InputContext * /*ctx*/) override { }
  virtual void exitInput(ShellGrammarParser::InputContext * /*ctx*/) override { }

  virtual void enterOutput(ShellGrammarParser::OutputContext * /*ctx*/) override { }
  virtual void exitOutput(ShellGrammarParser::OutputContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

