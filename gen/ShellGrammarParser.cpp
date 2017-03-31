
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
    setState(10);
    command();
    setState(17);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ShellGrammarParser::WS) {
      setState(11);
      match(ShellGrammarParser::WS);
      setState(12);
      match(ShellGrammarParser::PIPELINE);
      setState(13);
      match(ShellGrammarParser::WS);
      setState(14);
      command();
      setState(19);
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

std::vector<ShellGrammarParser::ParameterContext *> ShellGrammarParser::CommandContext::parameter() {
  return getRuleContexts<ShellGrammarParser::ParameterContext>();
}

ShellGrammarParser::ParameterContext* ShellGrammarParser::CommandContext::parameter(size_t i) {
  return getRuleContext<ShellGrammarParser::ParameterContext>(i);
}

std::vector<tree::TerminalNode *> ShellGrammarParser::CommandContext::INPUT() {
  return getTokens(ShellGrammarParser::INPUT);
}

tree::TerminalNode* ShellGrammarParser::CommandContext::INPUT(size_t i) {
  return getToken(ShellGrammarParser::INPUT, i);
}

std::vector<tree::TerminalNode *> ShellGrammarParser::CommandContext::OUTPUT() {
  return getTokens(ShellGrammarParser::OUTPUT);
}

tree::TerminalNode* ShellGrammarParser::CommandContext::OUTPUT(size_t i) {
  return getToken(ShellGrammarParser::OUTPUT, i);
}

std::vector<ShellGrammarParser::FlagContext *> ShellGrammarParser::CommandContext::flag() {
  return getRuleContexts<ShellGrammarParser::FlagContext>();
}

ShellGrammarParser::FlagContext* ShellGrammarParser::CommandContext::flag(size_t i) {
  return getRuleContext<ShellGrammarParser::FlagContext>(i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(20);
    program();
    setState(32);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(30);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          setState(21);
          match(ShellGrammarParser::WS);
          setState(24);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case ShellGrammarParser::T__0: {
              setState(22);
              flag();
              break;
            }

            case ShellGrammarParser::LOWERCASE:
            case ShellGrammarParser::UPPERCASE:
            case ShellGrammarParser::NUMBER:
            case ShellGrammarParser::OTHER: {
              setState(23);
              parameter();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          break;
        }

        case 2: {
          setState(26);
          match(ShellGrammarParser::WS);
          setState(27);
          _la = _input->LA(1);
          if (!(_la == ShellGrammarParser::INPUT

          || _la == ShellGrammarParser::OUTPUT)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(28);
          match(ShellGrammarParser::WS);
          setState(29);
          parameter();
          break;
        }

        } 
      }
      setState(34);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
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
    setState(36); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(35);
      match(ShellGrammarParser::LOWERCASE);
      setState(38); 
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
  enterRule(_localctx, 6, ShellGrammarParser::RuleFlag);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    match(ShellGrammarParser::T__0);
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
  enterRule(_localctx, 8, ShellGrammarParser::RuleParameter);
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
  "line", "command", "program", "flag", "parameter"
};

std::vector<std::string> ShellGrammarParser::_literalNames = {
  "", "'-'", "", "'<'", "", "'|'"
};

std::vector<std::string> ShellGrammarParser::_symbolicNames = {
  "", "", "WS", "INPUT", "OUTPUT", "PIPELINE", "LOWERCASE", "UPPERCASE", 
  "NUMBER", "OTHER"
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
    0x3, 0xb, 0x36, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x12, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
    0x15, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x1b, 
    0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x21, 0xa, 
    0x3, 0xc, 0x3, 0xe, 0x3, 0x24, 0xb, 0x3, 0x3, 0x4, 0x6, 0x4, 0x27, 0xa, 
    0x4, 0xd, 0x4, 0xe, 0x4, 0x28, 0x3, 0x5, 0x3, 0x5, 0x6, 0x5, 0x2d, 0xa, 
    0x5, 0xd, 0x5, 0xe, 0x5, 0x2e, 0x3, 0x6, 0x6, 0x6, 0x32, 0xa, 0x6, 0xd, 
    0x6, 0xe, 0x6, 0x33, 0x3, 0x6, 0x2, 0x2, 0x7, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0x2, 0x5, 0x3, 0x2, 0x5, 0x6, 0x3, 0x2, 0x8, 0xa, 0x3, 0x2, 0x8, 0xb, 
    0x37, 0x2, 0xc, 0x3, 0x2, 0x2, 0x2, 0x4, 0x16, 0x3, 0x2, 0x2, 0x2, 0x6, 
    0x26, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2a, 0x3, 0x2, 0x2, 0x2, 0xa, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x13, 0x5, 0x4, 0x3, 0x2, 0xd, 0xe, 0x7, 0x4, 
    0x2, 0x2, 0xe, 0xf, 0x7, 0x7, 0x2, 0x2, 0xf, 0x10, 0x7, 0x4, 0x2, 0x2, 
    0x10, 0x12, 0x5, 0x4, 0x3, 0x2, 0x11, 0xd, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0x13, 0x11, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x3, 0x3, 0x2, 0x2, 0x2, 0x15, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x22, 0x5, 0x6, 0x4, 0x2, 0x17, 0x1a, 0x7, 0x4, 
    0x2, 0x2, 0x18, 0x1b, 0x5, 0x8, 0x5, 0x2, 0x19, 0x1b, 0x5, 0xa, 0x6, 
    0x2, 0x1a, 0x18, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0x1b, 0x21, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 0x7, 0x4, 0x2, 0x2, 0x1d, 
    0x1e, 0x9, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x7, 0x4, 0x2, 0x2, 0x1f, 0x21, 
    0x5, 0xa, 0x6, 0x2, 0x20, 0x17, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1c, 0x3, 
    0x2, 0x2, 0x2, 0x21, 0x24, 0x3, 0x2, 0x2, 0x2, 0x22, 0x20, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x23, 0x3, 0x2, 0x2, 0x2, 0x23, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0x22, 0x3, 0x2, 0x2, 0x2, 0x25, 0x27, 0x7, 0x8, 0x2, 0x2, 
    0x26, 0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x26, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x3, 0x2, 0x2, 0x2, 0x29, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x2c, 0x7, 0x3, 0x2, 0x2, 0x2b, 0x2d, 0x9, 
    0x3, 0x2, 0x2, 0x2c, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 
    0x2, 0x2, 0x2e, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0x2f, 0x9, 0x3, 0x2, 0x2, 0x2, 0x30, 0x32, 0x9, 0x4, 0x2, 0x2, 
    0x31, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x3, 0x2, 0x2, 0x2, 0x33, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x9, 0x13, 0x1a, 0x20, 0x22, 0x28, 0x2e, 0x33, 
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
