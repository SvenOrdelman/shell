
// Generated from /home/jeroen/CLionProjects/Pearl/ShellGrammar.g4 by ANTLR 4.6


#include "ShellGrammarLexer.h"


using namespace antlr4;


ShellGrammarLexer::ShellGrammarLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ShellGrammarLexer::~ShellGrammarLexer() {
  delete _interpreter;
}

std::string ShellGrammarLexer::getGrammarFileName() const {
  return "ShellGrammar.g4";
}

const std::vector<std::string>& ShellGrammarLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& ShellGrammarLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& ShellGrammarLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& ShellGrammarLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> ShellGrammarLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& ShellGrammarLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> ShellGrammarLexer::_decisionToDFA;
atn::PredictionContextCache ShellGrammarLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ShellGrammarLexer::_atn;
std::vector<uint16_t> ShellGrammarLexer::_serializedATN;

std::vector<std::string> ShellGrammarLexer::_ruleNames = {
  "T__0", "WS", "INPUT", "OUTPUT", "PIPELINE", "LOWERCASE", "UPPERCASE", 
  "NUMBER", "OTHER"
};

std::vector<std::string> ShellGrammarLexer::_modeNames = {
  "DEFAULT_MODE"
};

std::vector<std::string> ShellGrammarLexer::_literalNames = {
  "", "'-'", "", "'<'", "'>'", "'|'"
};

std::vector<std::string> ShellGrammarLexer::_symbolicNames = {
  "", "", "WS", "INPUT", "OUTPUT", "PIPELINE", "LOWERCASE", "UPPERCASE", 
  "NUMBER", "OTHER"
};

dfa::Vocabulary ShellGrammarLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ShellGrammarLexer::_tokenNames;

ShellGrammarLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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
    0x2, 0xb, 0x2a, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 
    0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
    0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x6, 0x3, 0x19, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 
    0x1a, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x2, 0x2, 0xb, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 
    0xd, 0x8, 0xf, 0x9, 0x11, 0xa, 0x13, 0xb, 0x3, 0x2, 0x6, 0x3, 0x2, 0x63, 
    0x7c, 0x3, 0x2, 0x43, 0x5c, 0x3, 0x2, 0x32, 0x3b, 0x9, 0x2, 0x24, 0x24, 
    0x2a, 0x2b, 0x2d, 0x2d, 0x2f, 0x30, 0x3c, 0x3c, 0x5d, 0x5d, 0x5f, 0x5f, 
    0x2a, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 0x2, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x3, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0x5, 0x18, 0x3, 0x2, 0x2, 0x2, 0x7, 0x1c, 
    0x3, 0x2, 0x2, 0x2, 0x9, 0x1e, 0x3, 0x2, 0x2, 0x2, 0xb, 0x20, 0x3, 0x2, 
    0x2, 0x2, 0xd, 0x22, 0x3, 0x2, 0x2, 0x2, 0xf, 0x24, 0x3, 0x2, 0x2, 0x2, 
    0x11, 0x26, 0x3, 0x2, 0x2, 0x2, 0x13, 0x28, 0x3, 0x2, 0x2, 0x2, 0x15, 
    0x16, 0x7, 0x2f, 0x2, 0x2, 0x16, 0x4, 0x3, 0x2, 0x2, 0x2, 0x17, 0x19, 
    0x7, 0x22, 0x2, 0x2, 0x18, 0x17, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1a, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0x18, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0x1b, 0x6, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 0x7, 0x3e, 0x2, 
    0x2, 0x1d, 0x8, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x7, 0x40, 0x2, 0x2, 
    0x1f, 0xa, 0x3, 0x2, 0x2, 0x2, 0x20, 0x21, 0x7, 0x7e, 0x2, 0x2, 0x21, 
    0xc, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x9, 0x2, 0x2, 0x2, 0x23, 0xe, 
    0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x9, 0x3, 0x2, 0x2, 0x25, 0x10, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0x27, 0x9, 0x4, 0x2, 0x2, 0x27, 0x12, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x29, 0x9, 0x5, 0x2, 0x2, 0x29, 0x14, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x2, 0x1a, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ShellGrammarLexer::Initializer ShellGrammarLexer::_init;
