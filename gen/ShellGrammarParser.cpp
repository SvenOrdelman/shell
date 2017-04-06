
// Generated from /home/jeroen/CLionProjects/RealPearlShell/ShellGrammar.g4 by ANTLR 4.6


#include "ShellGrammarListener.h"
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


size_t ShellGrammarParser::LineContext::getRuleIndex() const {
  return ShellGrammarParser::RuleLine;
}

void ShellGrammarParser::LineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLine(this);
}

void ShellGrammarParser::LineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLine(this);
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
    dynamic_cast<LineContext *>(_localctx)->commandContext = command();
    dynamic_cast<LineContext *>(_localctx)->c.push_back(dynamic_cast<LineContext *>(_localctx)->commandContext);
    setState(17);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ShellGrammarParser::WS) {
      setState(11);
      match(ShellGrammarParser::WS);
      setState(12);
      match(ShellGrammarParser::T__0);
      setState(13);
      match(ShellGrammarParser::WS);
      setState(14);
      dynamic_cast<LineContext *>(_localctx)->commandContext = command();
      dynamic_cast<LineContext *>(_localctx)->c.push_back(dynamic_cast<LineContext *>(_localctx)->commandContext);
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

tree::TerminalNode* ShellGrammarParser::CommandContext::WORD() {
  return getToken(ShellGrammarParser::WORD, 0);
}

std::vector<tree::TerminalNode *> ShellGrammarParser::CommandContext::WS() {
  return getTokens(ShellGrammarParser::WS);
}

tree::TerminalNode* ShellGrammarParser::CommandContext::WS(size_t i) {
  return getToken(ShellGrammarParser::WS, i);
}

std::vector<ShellGrammarParser::ExtraContext *> ShellGrammarParser::CommandContext::extra() {
  return getRuleContexts<ShellGrammarParser::ExtraContext>();
}

ShellGrammarParser::ExtraContext* ShellGrammarParser::CommandContext::extra(size_t i) {
  return getRuleContext<ShellGrammarParser::ExtraContext>(i);
}


size_t ShellGrammarParser::CommandContext::getRuleIndex() const {
  return ShellGrammarParser::RuleCommand;
}

void ShellGrammarParser::CommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommand(this);
}

void ShellGrammarParser::CommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommand(this);
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
    setState(20);
    match(ShellGrammarParser::WORD);
    setState(25);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(21);
        match(ShellGrammarParser::WS);
        setState(22);
        extra(); 
      }
      setState(27);
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

//----------------- ExtraContext ------------------------------------------------------------------

ShellGrammarParser::ExtraContext::ExtraContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellGrammarParser::ExtraContext::WORD() {
  return getToken(ShellGrammarParser::WORD, 0);
}

tree::TerminalNode* ShellGrammarParser::ExtraContext::WS() {
  return getToken(ShellGrammarParser::WS, 0);
}

ShellGrammarParser::InputContext* ShellGrammarParser::ExtraContext::input() {
  return getRuleContext<ShellGrammarParser::InputContext>(0);
}

ShellGrammarParser::OutputContext* ShellGrammarParser::ExtraContext::output() {
  return getRuleContext<ShellGrammarParser::OutputContext>(0);
}


size_t ShellGrammarParser::ExtraContext::getRuleIndex() const {
  return ShellGrammarParser::RuleExtra;
}

void ShellGrammarParser::ExtraContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExtra(this);
}

void ShellGrammarParser::ExtraContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExtra(this);
}


antlrcpp::Any ShellGrammarParser::ExtraContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitExtra(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::ExtraContext* ShellGrammarParser::extra() {
  ExtraContext *_localctx = _tracker.createInstance<ExtraContext>(_ctx, getState());
  enterRule(_localctx, 4, ShellGrammarParser::RuleExtra);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ShellGrammarParser::T__1)
      | (1ULL << ShellGrammarParser::T__2)
      | (1ULL << ShellGrammarParser::T__3)
      | (1ULL << ShellGrammarParser::T__4))) != 0)) {
      setState(30);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ShellGrammarParser::T__1: {
          setState(28);
          input();
          break;
        }

        case ShellGrammarParser::T__2:
        case ShellGrammarParser::T__3:
        case ShellGrammarParser::T__4: {
          setState(29);
          output();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(32);
      match(ShellGrammarParser::WS);
    }
    setState(36);
    match(ShellGrammarParser::WORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InputContext ------------------------------------------------------------------

ShellGrammarParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ShellGrammarParser::InputContext::getRuleIndex() const {
  return ShellGrammarParser::RuleInput;
}

void ShellGrammarParser::InputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInput(this);
}

void ShellGrammarParser::InputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInput(this);
}


antlrcpp::Any ShellGrammarParser::InputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitInput(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::InputContext* ShellGrammarParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 6, ShellGrammarParser::RuleInput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    match(ShellGrammarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OutputContext ------------------------------------------------------------------

ShellGrammarParser::OutputContext::OutputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ShellGrammarParser::OutputContext::getRuleIndex() const {
  return ShellGrammarParser::RuleOutput;
}

void ShellGrammarParser::OutputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOutput(this);
}

void ShellGrammarParser::OutputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOutput(this);
}


antlrcpp::Any ShellGrammarParser::OutputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitOutput(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::OutputContext* ShellGrammarParser::output() {
  OutputContext *_localctx = _tracker.createInstance<OutputContext>(_ctx, getState());
  enterRule(_localctx, 8, ShellGrammarParser::RuleOutput);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ShellGrammarParser::T__2)
      | (1ULL << ShellGrammarParser::T__3)
      | (1ULL << ShellGrammarParser::T__4))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
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
  "line", "command", "extra", "input", "output"
};

std::vector<std::string> ShellGrammarParser::_literalNames = {
  "", "'|'", "'<'", "'>'", "'2>'", "'>>'"
};

std::vector<std::string> ShellGrammarParser::_symbolicNames = {
  "", "", "", "", "", "", "WORD", "WS"
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
    0x3, 0x9, 0x2d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x12, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
    0x15, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x1a, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0x1d, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x21, 
    0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x25, 0xa, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x2, 0x2, 0x7, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0x2, 0x3, 0x3, 0x2, 0x5, 0x7, 0x2b, 0x2, 0xc, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x16, 0x3, 0x2, 0x2, 0x2, 0x6, 0x24, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x28, 0x3, 0x2, 0x2, 0x2, 0xa, 0x2a, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x13, 0x5, 0x4, 0x3, 0x2, 0xd, 0xe, 0x7, 0x9, 0x2, 0x2, 0xe, 0xf, 
    0x7, 0x3, 0x2, 0x2, 0xf, 0x10, 0x7, 0x9, 0x2, 0x2, 0x10, 0x12, 0x5, 
    0x4, 0x3, 0x2, 0x11, 0xd, 0x3, 0x2, 0x2, 0x2, 0x12, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0x13, 0x11, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x3, 0x3, 0x2, 0x2, 0x2, 0x15, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x1b, 0x7, 0x8, 0x2, 0x2, 0x17, 0x18, 0x7, 0x9, 0x2, 0x2, 0x18, 
    0x1a, 0x5, 0x6, 0x4, 0x2, 0x19, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x1b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0x21, 0x5, 0x8, 0x5, 0x2, 0x1f, 0x21, 0x5, 0xa, 0x6, 
    0x2, 0x20, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x21, 0x22, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x7, 0x9, 0x2, 0x2, 0x23, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0x24, 0x20, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x7, 
    0x8, 0x2, 0x2, 0x27, 0x7, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x7, 0x4, 
    0x2, 0x2, 0x29, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x9, 0x2, 0x2, 
    0x2, 0x2b, 0xb, 0x3, 0x2, 0x2, 0x2, 0x6, 0x13, 0x1b, 0x20, 0x24, 
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
