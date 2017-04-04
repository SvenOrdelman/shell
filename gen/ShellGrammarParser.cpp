
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

std::vector<tree::TerminalNode *> ShellGrammarParser::LineContext::PIPELINE() {
  return getTokens(ShellGrammarParser::PIPELINE);
}

tree::TerminalNode* ShellGrammarParser::LineContext::PIPELINE(size_t i) {
  return getToken(ShellGrammarParser::PIPELINE, i);
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
    setState(16);
    command();
    setState(23);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ShellGrammarParser::WS) {
      setState(17);
      match(ShellGrammarParser::WS);
      setState(18);
      match(ShellGrammarParser::PIPELINE);
      setState(19);
      match(ShellGrammarParser::WS);
      setState(20);
      command();
      setState(25);
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
    setState(26);
    program();
    setState(31);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(27);
        match(ShellGrammarParser::WS);
        setState(28);
        extra(); 
      }
      setState(33);
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

ShellGrammarParser::FlagContext* ShellGrammarParser::ExtraContext::flag() {
  return getRuleContext<ShellGrammarParser::FlagContext>(0);
}

ShellGrammarParser::ParameterContext* ShellGrammarParser::ExtraContext::parameter() {
  return getRuleContext<ShellGrammarParser::ParameterContext>(0);
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
    setState(44);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ShellGrammarParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(34);
        flag();
        break;
      }

      case ShellGrammarParser::T__1:
      case ShellGrammarParser::T__2:
      case ShellGrammarParser::T__3:
      case ShellGrammarParser::T__4:
      case ShellGrammarParser::LOWERCASE:
      case ShellGrammarParser::UPPERCASE:
      case ShellGrammarParser::NUMBER:
      case ShellGrammarParser::OTHER: {
        enterOuterAlt(_localctx, 2);
        setState(41);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ShellGrammarParser::T__1)
          | (1ULL << ShellGrammarParser::T__2)
          | (1ULL << ShellGrammarParser::T__3)
          | (1ULL << ShellGrammarParser::T__4))) != 0)) {
          setState(37);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case ShellGrammarParser::T__1: {
              setState(35);
              input();
              break;
            }

            case ShellGrammarParser::T__2:
            case ShellGrammarParser::T__3:
            case ShellGrammarParser::T__4: {
              setState(36);
              output();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(39);
          match(ShellGrammarParser::WS);
        }
        setState(43);
        parameter();
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

void ShellGrammarParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void ShellGrammarParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any ShellGrammarParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::ProgramContext* ShellGrammarParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 6, ShellGrammarParser::RuleProgram);
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
      match(ShellGrammarParser::LOWERCASE);
      setState(49); 
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

void ShellGrammarParser::FlagContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFlag(this);
}

void ShellGrammarParser::FlagContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFlag(this);
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
    setState(51);
    match(ShellGrammarParser::T__0);
    setState(53); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(52);
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
      setState(55); 
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

void ShellGrammarParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void ShellGrammarParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ShellGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
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
    setState(58); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(57);
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
      setState(60); 
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
  enterRule(_localctx, 12, ShellGrammarParser::RuleInput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
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
  enterRule(_localctx, 14, ShellGrammarParser::RuleOutput);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
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
  "line", "command", "extra", "program", "flag", "parameter", "input", "output"
};

std::vector<std::string> ShellGrammarParser::_literalNames = {
  "", "'-'", "'<'", "'>'", "'2>'", "'>>'", "", "'|'"
};

std::vector<std::string> ShellGrammarParser::_symbolicNames = {
  "", "", "", "", "", "", "WS", "PIPELINE", "LOWERCASE", "UPPERCASE", "NUMBER", 
  "OTHER"
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
    0x3, 0xd, 0x45, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x7, 0x2, 0x18, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x1b, 0xb, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x20, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x23, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x28, 
    0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x2c, 0xa, 0x4, 0x3, 0x4, 0x5, 
    0x4, 0x2f, 0xa, 0x4, 0x3, 0x5, 0x6, 0x5, 0x32, 0xa, 0x5, 0xd, 0x5, 0xe, 
    0x5, 0x33, 0x3, 0x6, 0x3, 0x6, 0x6, 0x6, 0x38, 0xa, 0x6, 0xd, 0x6, 0xe, 
    0x6, 0x39, 0x3, 0x7, 0x6, 0x7, 0x3d, 0xa, 0x7, 0xd, 0x7, 0xe, 0x7, 0x3e, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x2, 0x2, 0xa, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x2, 0x5, 0x3, 0x2, 0xa, 0xc, 0x3, 
    0x2, 0xa, 0xd, 0x3, 0x2, 0x5, 0x7, 0x44, 0x2, 0x12, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x35, 0x3, 0x2, 0x2, 0x2, 0xc, 0x3c, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x40, 0x3, 0x2, 0x2, 0x2, 0x10, 0x42, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x19, 0x5, 0x4, 0x3, 0x2, 0x13, 0x14, 0x7, 0x8, 0x2, 0x2, 
    0x14, 0x15, 0x7, 0x9, 0x2, 0x2, 0x15, 0x16, 0x7, 0x8, 0x2, 0x2, 0x16, 
    0x18, 0x5, 0x4, 0x3, 0x2, 0x17, 0x13, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0x19, 0x17, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1a, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0x3, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x21, 0x5, 0x8, 0x5, 0x2, 0x1d, 0x1e, 0x7, 0x8, 0x2, 
    0x2, 0x1e, 0x20, 0x5, 0x6, 0x4, 0x2, 0x1f, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x23, 0x3, 0x2, 0x2, 0x2, 0x21, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x21, 
    0x22, 0x3, 0x2, 0x2, 0x2, 0x22, 0x5, 0x3, 0x2, 0x2, 0x2, 0x23, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0x24, 0x2f, 0x5, 0xa, 0x6, 0x2, 0x25, 0x28, 0x5, 
    0xe, 0x8, 0x2, 0x26, 0x28, 0x5, 0x10, 0x9, 0x2, 0x27, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0x27, 0x26, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0x29, 0x2a, 0x7, 0x8, 0x2, 0x2, 0x2a, 0x2c, 0x3, 0x2, 0x2, 0x2, 
    0x2b, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2f, 0x5, 0xc, 0x7, 0x2, 0x2e, 0x24, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0x32, 0x7, 0xa, 0x2, 0x2, 0x31, 0x30, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x33, 0x3, 0x2, 0x2, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 
    0x2, 0x33, 0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x35, 0x37, 0x7, 0x3, 0x2, 0x2, 0x36, 0x38, 0x9, 0x2, 0x2, 0x2, 0x37, 
    0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 0x2, 0x2, 0x2, 0x39, 0x37, 
    0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x3b, 0x3d, 0x9, 0x3, 0x2, 0x2, 0x3c, 0x3b, 0x3, 0x2, 
    0x2, 0x2, 0x3d, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x41, 0x7, 0x4, 0x2, 0x2, 0x41, 0xf, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x43, 0x9, 0x4, 0x2, 0x2, 0x43, 0x11, 0x3, 0x2, 0x2, 0x2, 0xa, 0x19, 
    0x21, 0x27, 0x2b, 0x2e, 0x33, 0x39, 0x3e, 
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
