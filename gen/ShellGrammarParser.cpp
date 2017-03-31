
// Generated from /home/sven/Desktop/Base/ShellGrammar.g4 by ANTLR 4.6


#include "ShellGrammarVisitor.h"

#include "ShellGrammarParser.h"


using namespace antlrcpp;
using namespace antlr4;

ShellGrammarParser::ShellGrammarParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ShellGrammarParser::~ShellGrammarParser() {
  delete _interpreter;
}

std::string ShellGrammarParser::getGrammarFileName() const {
  return "ShellGrammar.g4";
}

const std::vector<std::string>& ShellGrammarParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ShellGrammarParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- LineContext ------------------------------------------------------------------

ShellGrammarParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ShellGrammarParser::CommandContext *> ShellGrammarParser::LineContext::command() {
  return getRuleContexts<ShellGrammarParser::CommandContext>();
}

ShellGrammarParser::CommandContext* ShellGrammarParser::LineContext::command(size_t i) {
  return getRuleContext<ShellGrammarParser::CommandContext>(i);
}

std::vector<tree::TerminalNode *> ShellGrammarParser::LineContext::WS() {
  return getTokens(ShellGrammarParser::WS);
}

tree::TerminalNode* ShellGrammarParser::LineContext::WS(size_t i) {
  return getToken(ShellGrammarParser::WS, i);
}

std::vector<tree::TerminalNode *> ShellGrammarParser::LineContext::PIPELINE() {
  return getTokens(ShellGrammarParser::PIPELINE);
}

tree::TerminalNode* ShellGrammarParser::LineContext::PIPELINE(size_t i) {
  return getToken(ShellGrammarParser::PIPELINE, i);
}


size_t ShellGrammarParser::LineContext::getRuleIndex() const {
  return ShellGrammarParser::RuleLine;
}

antlrcpp::Any ShellGrammarParser::LineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitLine(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::LineContext* ShellGrammarParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 0, ShellGrammarParser::RuleLine);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(12);
    command();
    setState(19);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ShellGrammarParser::WS) {
      setState(13);
      match(ShellGrammarParser::WS);
      setState(14);
      match(ShellGrammarParser::PIPELINE);
      setState(15);
      match(ShellGrammarParser::WS);
      setState(16);
      command();
      setState(21);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommandContext ------------------------------------------------------------------

ShellGrammarParser::CommandContext::CommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ShellGrammarParser::ProgramContext* ShellGrammarParser::CommandContext::program() {
  return getRuleContext<ShellGrammarParser::ProgramContext>(0);
}

std::vector<tree::TerminalNode *> ShellGrammarParser::CommandContext::WS() {
  return getTokens(ShellGrammarParser::WS);
}

tree::TerminalNode* ShellGrammarParser::CommandContext::WS(size_t i) {
  return getToken(ShellGrammarParser::WS, i);
}

std::vector<ShellGrammarParser::ArgumentContext *> ShellGrammarParser::CommandContext::argument() {
  return getRuleContexts<ShellGrammarParser::ArgumentContext>();
}

ShellGrammarParser::ArgumentContext* ShellGrammarParser::CommandContext::argument(size_t i) {
  return getRuleContext<ShellGrammarParser::ArgumentContext>(i);
}


size_t ShellGrammarParser::CommandContext::getRuleIndex() const {
  return ShellGrammarParser::RuleCommand;
}

antlrcpp::Any ShellGrammarParser::CommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitCommand(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::CommandContext* ShellGrammarParser::command() {
  CommandContext *_localctx = _tracker.createInstance<CommandContext>(_ctx, getState());
  enterRule(_localctx, 2, ShellGrammarParser::RuleCommand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(22);
    program();
    setState(27);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(23);
        match(ShellGrammarParser::WS);
        setState(24);
        argument(); 
      }
      setState(29);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

ShellGrammarParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ShellGrammarParser::ProgramContext::LOWERCASE() {
  return getTokens(ShellGrammarParser::LOWERCASE);
}

tree::TerminalNode* ShellGrammarParser::ProgramContext::LOWERCASE(size_t i) {
  return getToken(ShellGrammarParser::LOWERCASE, i);
}


size_t ShellGrammarParser::ProgramContext::getRuleIndex() const {
  return ShellGrammarParser::RuleProgram;
}

antlrcpp::Any ShellGrammarParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::ProgramContext* ShellGrammarParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 4, ShellGrammarParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(31); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(30);
      match(ShellGrammarParser::LOWERCASE);
      setState(33); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ShellGrammarParser::LOWERCASE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

ShellGrammarParser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ShellGrammarParser::FlagContext* ShellGrammarParser::ArgumentContext::flag() {
  return getRuleContext<ShellGrammarParser::FlagContext>(0);
}

tree::TerminalNode* ShellGrammarParser::ArgumentContext::WS() {
  return getToken(ShellGrammarParser::WS, 0);
}

ShellGrammarParser::ParameterContext* ShellGrammarParser::ArgumentContext::parameter() {
  return getRuleContext<ShellGrammarParser::ParameterContext>(0);
}


size_t ShellGrammarParser::ArgumentContext::getRuleIndex() const {
  return ShellGrammarParser::RuleArgument;
}

antlrcpp::Any ShellGrammarParser::ArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitArgument(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::ArgumentContext* ShellGrammarParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 6, ShellGrammarParser::RuleArgument);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
    match(ShellGrammarParser::T__0);
    setState(36);
    flag();
    setState(37);
    match(ShellGrammarParser::WS);
    setState(39);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ShellGrammarParser::LOWERCASE)
      | (1ULL << ShellGrammarParser::UPPERCASE)
      | (1ULL << ShellGrammarParser::NUMBER)
      | (1ULL << ShellGrammarParser::OTHER))) != 0)) {
      setState(38);
      parameter();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FlagContext ------------------------------------------------------------------

ShellGrammarParser::FlagContext::FlagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ShellGrammarParser::FlagContext::LOWERCASE() {
  return getTokens(ShellGrammarParser::LOWERCASE);
}

tree::TerminalNode* ShellGrammarParser::FlagContext::LOWERCASE(size_t i) {
  return getToken(ShellGrammarParser::LOWERCASE, i);
}

std::vector<tree::TerminalNode *> ShellGrammarParser::FlagContext::UPPERCASE() {
  return getTokens(ShellGrammarParser::UPPERCASE);
}

tree::TerminalNode* ShellGrammarParser::FlagContext::UPPERCASE(size_t i) {
  return getToken(ShellGrammarParser::UPPERCASE, i);
}

std::vector<tree::TerminalNode *> ShellGrammarParser::FlagContext::NUMBER() {
  return getTokens(ShellGrammarParser::NUMBER);
}

tree::TerminalNode* ShellGrammarParser::FlagContext::NUMBER(size_t i) {
  return getToken(ShellGrammarParser::NUMBER, i);
}


size_t ShellGrammarParser::FlagContext::getRuleIndex() const {
  return ShellGrammarParser::RuleFlag;
}

antlrcpp::Any ShellGrammarParser::FlagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitFlag(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::FlagContext* ShellGrammarParser::flag() {
  FlagContext *_localctx = _tracker.createInstance<FlagContext>(_ctx, getState());
  enterRule(_localctx, 8, ShellGrammarParser::RuleFlag);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(41);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ShellGrammarParser::LOWERCASE)
        | (1ULL << ShellGrammarParser::UPPERCASE)
        | (1ULL << ShellGrammarParser::NUMBER))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(44); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ShellGrammarParser::LOWERCASE)
      | (1ULL << ShellGrammarParser::UPPERCASE)
      | (1ULL << ShellGrammarParser::NUMBER))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

ShellGrammarParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ShellGrammarParser::ParameterContext::LOWERCASE() {
  return getTokens(ShellGrammarParser::LOWERCASE);
}

tree::TerminalNode* ShellGrammarParser::ParameterContext::LOWERCASE(size_t i) {
  return getToken(ShellGrammarParser::LOWERCASE, i);
}

std::vector<tree::TerminalNode *> ShellGrammarParser::ParameterContext::UPPERCASE() {
  return getTokens(ShellGrammarParser::UPPERCASE);
}

tree::TerminalNode* ShellGrammarParser::ParameterContext::UPPERCASE(size_t i) {
  return getToken(ShellGrammarParser::UPPERCASE, i);
}

std::vector<tree::TerminalNode *> ShellGrammarParser::ParameterContext::NUMBER() {
  return getTokens(ShellGrammarParser::NUMBER);
}

tree::TerminalNode* ShellGrammarParser::ParameterContext::NUMBER(size_t i) {
  return getToken(ShellGrammarParser::NUMBER, i);
}

std::vector<tree::TerminalNode *> ShellGrammarParser::ParameterContext::OTHER() {
  return getTokens(ShellGrammarParser::OTHER);
}

tree::TerminalNode* ShellGrammarParser::ParameterContext::OTHER(size_t i) {
  return getToken(ShellGrammarParser::OTHER, i);
}


size_t ShellGrammarParser::ParameterContext::getRuleIndex() const {
  return ShellGrammarParser::RuleParameter;
}

antlrcpp::Any ShellGrammarParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::ParameterContext* ShellGrammarParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 10, ShellGrammarParser::RuleParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(47); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(46);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ShellGrammarParser::LOWERCASE)
        | (1ULL << ShellGrammarParser::UPPERCASE)
        | (1ULL << ShellGrammarParser::NUMBER)
        | (1ULL << ShellGrammarParser::OTHER))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(49); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ShellGrammarParser::LOWERCASE)
      | (1ULL << ShellGrammarParser::UPPERCASE)
      | (1ULL << ShellGrammarParser::NUMBER)
      | (1ULL << ShellGrammarParser::OTHER))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> ShellGrammarParser::_decisionToDFA;
atn::PredictionContextCache ShellGrammarParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ShellGrammarParser::_atn;
std::vector<uint16_t> ShellGrammarParser::_serializedATN;

std::vector<std::string> ShellGrammarParser::_ruleNames = {
  "line", "command", "program", "argument", "flag", "parameter"
};

std::vector<std::string> ShellGrammarParser::_literalNames = {
  "", "'-'", "", "'|'"
};

std::vector<std::string> ShellGrammarParser::_symbolicNames = {
  "", "", "WS", "PIPELINE", "LOWERCASE", "UPPERCASE", "NUMBER", "OTHER"
};

dfa::Vocabulary ShellGrammarParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ShellGrammarParser::_tokenNames;

ShellGrammarParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x430, 0xd6d1, 0x8206, 0xad2d, 0x4417, 0xaef1, 0x8d80, 0xaadd, 
    0x3, 0x9, 0x36, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x14, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0x17, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 
    0x3, 0x1c, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x1f, 0xb, 0x3, 0x3, 0x4, 0x6, 
    0x4, 0x22, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x23, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x2a, 0xa, 0x5, 0x3, 0x6, 0x6, 0x6, 0x2d, 0xa, 
    0x6, 0xd, 0x6, 0xe, 0x6, 0x2e, 0x3, 0x7, 0x6, 0x7, 0x32, 0xa, 0x7, 0xd, 
    0x7, 0xe, 0x7, 0x33, 0x3, 0x7, 0x2, 0x2, 0x8, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0x2, 0x4, 0x3, 0x2, 0x6, 0x8, 0x3, 0x2, 0x6, 0x9, 0x35, 0x2, 0xe, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x18, 0x3, 0x2, 0x2, 0x2, 0x6, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x25, 0x3, 0x2, 0x2, 0x2, 0xa, 0x2c, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x31, 0x3, 0x2, 0x2, 0x2, 0xe, 0x15, 0x5, 0x4, 0x3, 0x2, 0xf, 0x10, 
    0x7, 0x4, 0x2, 0x2, 0x10, 0x11, 0x7, 0x5, 0x2, 0x2, 0x11, 0x12, 0x7, 
    0x4, 0x2, 0x2, 0x12, 0x14, 0x5, 0x4, 0x3, 0x2, 0x13, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x14, 0x17, 0x3, 0x2, 0x2, 0x2, 0x15, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x15, 0x16, 0x3, 0x2, 0x2, 0x2, 0x16, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x17, 0x15, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1d, 0x5, 0x6, 0x4, 0x2, 0x19, 
    0x1a, 0x7, 0x4, 0x2, 0x2, 0x1a, 0x1c, 0x5, 0x8, 0x5, 0x2, 0x1b, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x1c, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x1f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x20, 0x22, 0x7, 0x6, 0x2, 
    0x2, 0x21, 0x20, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x23, 0x21, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x7, 0x3, 0x2, 0x2, 0x26, 0x27, 
    0x5, 0xa, 0x6, 0x2, 0x27, 0x29, 0x7, 0x4, 0x2, 0x2, 0x28, 0x2a, 0x5, 
    0xc, 0x7, 0x2, 0x29, 0x28, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2d, 0x9, 0x2, 0x2, 
    0x2, 0x2c, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 
    0x2e, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2f, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x30, 0x32, 0x9, 0x3, 0x2, 0x2, 0x31, 0x30, 
    0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x3, 0x2, 0x2, 0x2, 0x33, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x33, 0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x15, 0x1d, 0x23, 0x29, 0x2e, 0x33, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ShellGrammarParser::Initializer ShellGrammarParser::_init;
