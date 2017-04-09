
// Generated from /Users/jeroen/Documents/Saxion/leerjaar 2/2.3/Compilers & Operating Systems/PearlShell/ShellGrammar.g4 by ANTLR 4.6


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
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(9);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellGrammarParser::WS) {
      setState(8);
      match(ShellGrammarParser::WS);
    }
    setState(11);
    command();
    setState(18);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(12);
        match(ShellGrammarParser::WS);
        setState(13);
        match(ShellGrammarParser::T__0);
        setState(14);
        match(ShellGrammarParser::WS);
        setState(15);
        command(); 
      }
      setState(20);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
    setState(23);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(21);
      match(ShellGrammarParser::WS);
      setState(22);
      dynamic_cast<LineContext *>(_localctx)->bkg = match(ShellGrammarParser::T__1);
      break;
    }

    }
    setState(26);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellGrammarParser::WS) {
      setState(25);
      match(ShellGrammarParser::WS);
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

std::vector<ShellGrammarParser::IoContext *> ShellGrammarParser::CommandContext::io() {
  return getRuleContexts<ShellGrammarParser::IoContext>();
}

ShellGrammarParser::IoContext* ShellGrammarParser::CommandContext::io(size_t i) {
  return getRuleContext<ShellGrammarParser::IoContext>(i);
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
    setState(28);
    dynamic_cast<CommandContext *>(_localctx)->p = match(ShellGrammarParser::WORD);
    setState(36);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(29);
        match(ShellGrammarParser::WS);
        setState(32);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case ShellGrammarParser::WORD: {
            setState(30);
            extra();
            break;
          }

          case ShellGrammarParser::T__2:
          case ShellGrammarParser::T__3:
          case ShellGrammarParser::T__4:
          case ShellGrammarParser::T__5: {
            setState(31);
            io();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(38);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(39);
    dynamic_cast<ExtraContext *>(_localctx)->p = match(ShellGrammarParser::WORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IoContext ------------------------------------------------------------------

ShellGrammarParser::IoContext::IoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ShellGrammarParser::IoContext::getRuleIndex() const {
  return ShellGrammarParser::RuleIo;
}

void ShellGrammarParser::IoContext::copyFrom(IoContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AddContext ------------------------------------------------------------------

tree::TerminalNode* ShellGrammarParser::AddContext::WS() {
  return getToken(ShellGrammarParser::WS, 0);
}

tree::TerminalNode* ShellGrammarParser::AddContext::WORD() {
  return getToken(ShellGrammarParser::WORD, 0);
}

ShellGrammarParser::AddContext::AddContext(IoContext *ctx) { copyFrom(ctx); }

void ShellGrammarParser::AddContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd(this);
}
void ShellGrammarParser::AddContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd(this);
}

antlrcpp::Any ShellGrammarParser::AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitAdd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ErrContext ------------------------------------------------------------------

tree::TerminalNode* ShellGrammarParser::ErrContext::WS() {
  return getToken(ShellGrammarParser::WS, 0);
}

tree::TerminalNode* ShellGrammarParser::ErrContext::WORD() {
  return getToken(ShellGrammarParser::WORD, 0);
}

ShellGrammarParser::ErrContext::ErrContext(IoContext *ctx) { copyFrom(ctx); }

void ShellGrammarParser::ErrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterErr(this);
}
void ShellGrammarParser::ErrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitErr(this);
}

antlrcpp::Any ShellGrammarParser::ErrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitErr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InContext ------------------------------------------------------------------

tree::TerminalNode* ShellGrammarParser::InContext::WS() {
  return getToken(ShellGrammarParser::WS, 0);
}

tree::TerminalNode* ShellGrammarParser::InContext::WORD() {
  return getToken(ShellGrammarParser::WORD, 0);
}

ShellGrammarParser::InContext::InContext(IoContext *ctx) { copyFrom(ctx); }

void ShellGrammarParser::InContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIn(this);
}
void ShellGrammarParser::InContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIn(this);
}

antlrcpp::Any ShellGrammarParser::InContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitIn(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OutContext ------------------------------------------------------------------

tree::TerminalNode* ShellGrammarParser::OutContext::WS() {
  return getToken(ShellGrammarParser::WS, 0);
}

tree::TerminalNode* ShellGrammarParser::OutContext::WORD() {
  return getToken(ShellGrammarParser::WORD, 0);
}

ShellGrammarParser::OutContext::OutContext(IoContext *ctx) { copyFrom(ctx); }

void ShellGrammarParser::OutContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOut(this);
}
void ShellGrammarParser::OutContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOut(this);
}

antlrcpp::Any ShellGrammarParser::OutContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitOut(this);
  else
    return visitor->visitChildren(this);
}
ShellGrammarParser::IoContext* ShellGrammarParser::io() {
  IoContext *_localctx = _tracker.createInstance<IoContext>(_ctx, getState());
  enterRule(_localctx, 6, ShellGrammarParser::RuleIo);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(53);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ShellGrammarParser::T__2: {
        _localctx = dynamic_cast<IoContext *>(_tracker.createInstance<ShellGrammarParser::InContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(41);
        match(ShellGrammarParser::T__2);
        setState(42);
        match(ShellGrammarParser::WS);
        setState(43);
        dynamic_cast<InContext *>(_localctx)->path = match(ShellGrammarParser::WORD);
        break;
      }

      case ShellGrammarParser::T__3: {
        _localctx = dynamic_cast<IoContext *>(_tracker.createInstance<ShellGrammarParser::OutContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(44);
        match(ShellGrammarParser::T__3);
        setState(45);
        match(ShellGrammarParser::WS);
        setState(46);
        dynamic_cast<OutContext *>(_localctx)->path = match(ShellGrammarParser::WORD);
        break;
      }

      case ShellGrammarParser::T__4: {
        _localctx = dynamic_cast<IoContext *>(_tracker.createInstance<ShellGrammarParser::ErrContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(47);
        match(ShellGrammarParser::T__4);
        setState(48);
        match(ShellGrammarParser::WS);
        setState(49);
        dynamic_cast<ErrContext *>(_localctx)->path = match(ShellGrammarParser::WORD);
        break;
      }

      case ShellGrammarParser::T__5: {
        _localctx = dynamic_cast<IoContext *>(_tracker.createInstance<ShellGrammarParser::AddContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(50);
        match(ShellGrammarParser::T__5);
        setState(51);
        match(ShellGrammarParser::WS);
        setState(52);
        dynamic_cast<AddContext *>(_localctx)->path = match(ShellGrammarParser::WORD);
        break;
      }

    default:
      throw NoViableAltException(this);
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
  "line", "command", "extra", "io"
};

std::vector<std::string> ShellGrammarParser::_literalNames = {
  "", "'|'", "'&'", "'<'", "'>'", "'2>'", "'>>'"
};

std::vector<std::string> ShellGrammarParser::_symbolicNames = {
  "", "", "", "", "", "", "", "WORD", "WS"
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
    0x3, 0xa, 0x3a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x3, 0x2, 0x5, 0x2, 0xc, 0xa, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x13, 0xa, 0x2, 0xc, 
    0x2, 0xe, 0x2, 0x16, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x1a, 0xa, 
    0x2, 0x3, 0x2, 0x5, 0x2, 0x1d, 0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x5, 0x3, 0x23, 0xa, 0x3, 0x7, 0x3, 0x25, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x28, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x38, 0xa, 0x5, 0x3, 0x5, 0x2, 0x2, 
    0x6, 0x2, 0x4, 0x6, 0x8, 0x2, 0x2, 0x3e, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x6, 0x29, 0x3, 0x2, 0x2, 0x2, 0x8, 0x37, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0xc, 0x7, 0xa, 0x2, 0x2, 0xb, 0xa, 0x3, 0x2, 
    0x2, 0x2, 0xb, 0xc, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0xd, 0x14, 0x5, 0x4, 0x3, 0x2, 0xe, 0xf, 0x7, 0xa, 0x2, 0x2, 0xf, 0x10, 
    0x7, 0x3, 0x2, 0x2, 0x10, 0x11, 0x7, 0xa, 0x2, 0x2, 0x11, 0x13, 0x5, 
    0x4, 0x3, 0x2, 0x12, 0xe, 0x3, 0x2, 0x2, 0x2, 0x13, 0x16, 0x3, 0x2, 
    0x2, 0x2, 0x14, 0x12, 0x3, 0x2, 0x2, 0x2, 0x14, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x15, 0x19, 0x3, 0x2, 0x2, 0x2, 0x16, 0x14, 0x3, 0x2, 0x2, 0x2, 
    0x17, 0x18, 0x7, 0xa, 0x2, 0x2, 0x18, 0x1a, 0x7, 0x4, 0x2, 0x2, 0x19, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1c, 
    0x3, 0x2, 0x2, 0x2, 0x1b, 0x1d, 0x7, 0xa, 0x2, 0x2, 0x1c, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0x26, 0x7, 0x9, 0x2, 0x2, 0x1f, 0x22, 0x7, 0xa, 0x2, 
    0x2, 0x20, 0x23, 0x5, 0x6, 0x4, 0x2, 0x21, 0x23, 0x5, 0x8, 0x5, 0x2, 
    0x22, 0x20, 0x3, 0x2, 0x2, 0x2, 0x22, 0x21, 0x3, 0x2, 0x2, 0x2, 0x23, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x25, 0x28, 
    0x3, 0x2, 0x2, 0x2, 0x26, 0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0x27, 0x5, 0x3, 0x2, 0x2, 0x2, 0x28, 0x26, 0x3, 0x2, 
    0x2, 0x2, 0x29, 0x2a, 0x7, 0x9, 0x2, 0x2, 0x2a, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x2b, 0x2c, 0x7, 0x5, 0x2, 0x2, 0x2c, 0x2d, 0x7, 0xa, 0x2, 0x2, 
    0x2d, 0x38, 0x7, 0x9, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x6, 0x2, 0x2, 0x2f, 
    0x30, 0x7, 0xa, 0x2, 0x2, 0x30, 0x38, 0x7, 0x9, 0x2, 0x2, 0x31, 0x32, 
    0x7, 0x7, 0x2, 0x2, 0x32, 0x33, 0x7, 0xa, 0x2, 0x2, 0x33, 0x38, 0x7, 
    0x9, 0x2, 0x2, 0x34, 0x35, 0x7, 0x8, 0x2, 0x2, 0x35, 0x36, 0x7, 0xa, 
    0x2, 0x2, 0x36, 0x38, 0x7, 0x9, 0x2, 0x2, 0x37, 0x2b, 0x3, 0x2, 0x2, 
    0x2, 0x37, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x37, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x37, 0x34, 0x3, 0x2, 0x2, 0x2, 0x38, 0x9, 0x3, 0x2, 0x2, 0x2, 0x9, 
    0xb, 0x14, 0x19, 0x1c, 0x22, 0x26, 0x37, 
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
