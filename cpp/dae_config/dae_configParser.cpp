
// Generated from dae_config.g4 by ANTLR 4.11.1


#include "dae_configListener.h"

#include "dae_configParser.h"


using namespace antlrcpp;
using namespace dae_config;

using namespace antlr4;

namespace {

struct Dae_configParserStaticData final {
  Dae_configParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Dae_configParserStaticData(const Dae_configParserStaticData&) = delete;
  Dae_configParserStaticData(Dae_configParserStaticData&&) = delete;
  Dae_configParserStaticData& operator=(const Dae_configParserStaticData&) = delete;
  Dae_configParserStaticData& operator=(Dae_configParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag dae_configParserOnceFlag;
Dae_configParserStaticData *dae_configParserStaticData = nullptr;

void dae_configParserInitialize() {
  assert(dae_configParserStaticData == nullptr);
  auto staticData = std::make_unique<Dae_configParserStaticData>(
    std::vector<std::string>{
      "start", "literal", "expression", "declaration", "optAnnotation",
      "annotationParameter", "functionPrototype", "parameter", "arrowExpression",
      "arrowOperand", "standaloneFunction"
    },
    std::vector<std::string>{
      "", "'{'", "'}'", "':'", "'&&'", "','", "'['", "']'", "'!'", "'('",
      "')'", "'->'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "WHITESPACE", "COMMENT_BLOCK",
      "COMMENT_LINE_SHARP", "ID", "NON_ID", "QUOTE_STRING"
    }
  );
  static const int32_t serializedATNSegment[] = {
    4,1,17,155,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
    7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,1,0,5,0,24,8,0,10,0,12,0,27,9,0,1,0,1,
    0,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,40,8,2,10,2,12,2,43,9,2,1,2,
    1,2,1,3,1,3,1,3,1,3,1,3,5,3,52,8,3,10,3,12,3,55,9,3,1,3,1,3,1,3,1,3,1,
    3,1,3,1,3,5,3,64,8,3,10,3,12,3,67,9,3,1,3,1,3,3,3,71,8,3,1,4,1,4,1,4,
    1,4,5,4,77,8,4,10,4,12,4,80,9,4,3,4,82,8,4,1,4,1,4,3,4,86,8,4,1,5,1,5,
    1,5,1,5,3,5,92,8,5,1,6,3,6,95,8,6,1,6,1,6,1,6,1,6,1,6,5,6,102,8,6,10,
    6,12,6,105,9,6,3,6,107,8,6,1,6,1,6,1,7,1,7,1,7,1,7,3,7,115,8,7,1,8,1,
    8,1,8,1,8,1,8,5,8,122,8,8,10,8,12,8,125,9,8,1,9,1,9,1,9,1,9,1,9,5,9,132,
    8,9,10,9,12,9,135,9,9,1,9,1,9,1,9,1,9,1,9,5,9,142,8,9,10,9,12,9,145,9,
    9,1,9,1,9,1,9,3,9,150,8,9,1,10,1,10,1,10,1,10,0,0,11,0,2,4,6,8,10,12,
    14,16,18,20,0,1,1,0,15,17,165,0,25,1,0,0,0,2,30,1,0,0,0,4,32,1,0,0,0,
    6,70,1,0,0,0,8,85,1,0,0,0,10,91,1,0,0,0,12,94,1,0,0,0,14,114,1,0,0,0,
    16,116,1,0,0,0,18,149,1,0,0,0,20,151,1,0,0,0,22,24,3,4,2,0,23,22,1,0,
    0,0,24,27,1,0,0,0,25,23,1,0,0,0,25,26,1,0,0,0,26,28,1,0,0,0,27,25,1,0,
    0,0,28,29,5,0,0,1,29,1,1,0,0,0,30,31,7,0,0,0,31,3,1,0,0,0,32,33,5,15,
    0,0,33,41,5,1,0,0,34,40,3,16,8,0,35,40,3,6,3,0,36,40,3,20,10,0,37,40,
    3,2,1,0,38,40,3,4,2,0,39,34,1,0,0,0,39,35,1,0,0,0,39,36,1,0,0,0,39,37,
    1,0,0,0,39,38,1,0,0,0,40,43,1,0,0,0,41,39,1,0,0,0,41,42,1,0,0,0,42,44,
    1,0,0,0,43,41,1,0,0,0,44,45,5,2,0,0,45,5,1,0,0,0,46,47,7,0,0,0,47,48,
    5,3,0,0,48,53,3,12,6,0,49,50,5,4,0,0,50,52,3,12,6,0,51,49,1,0,0,0,52,
    55,1,0,0,0,53,51,1,0,0,0,53,54,1,0,0,0,54,56,1,0,0,0,55,53,1,0,0,0,56,
    57,3,8,4,0,57,71,1,0,0,0,58,59,7,0,0,0,59,60,5,3,0,0,60,65,3,2,1,0,61,
    62,5,5,0,0,62,64,3,2,1,0,63,61,1,0,0,0,64,67,1,0,0,0,65,63,1,0,0,0,65,
    66,1,0,0,0,66,68,1,0,0,0,67,65,1,0,0,0,68,69,3,8,4,0,69,71,1,0,0,0,70,
    46,1,0,0,0,70,58,1,0,0,0,71,7,1,0,0,0,72,81,5,6,0,0,73,78,3,10,5,0,74,
    75,5,5,0,0,75,77,3,10,5,0,76,74,1,0,0,0,77,80,1,0,0,0,78,76,1,0,0,0,78,
    79,1,0,0,0,79,82,1,0,0,0,80,78,1,0,0,0,81,73,1,0,0,0,81,82,1,0,0,0,82,
    83,1,0,0,0,83,86,5,7,0,0,84,86,1,0,0,0,85,72,1,0,0,0,85,84,1,0,0,0,86,
    9,1,0,0,0,87,92,3,14,7,0,88,89,5,15,0,0,89,90,5,3,0,0,90,92,3,12,6,0,
    91,87,1,0,0,0,91,88,1,0,0,0,92,11,1,0,0,0,93,95,5,8,0,0,94,93,1,0,0,0,
    94,95,1,0,0,0,95,96,1,0,0,0,96,97,7,0,0,0,97,106,5,9,0,0,98,103,3,14,
    7,0,99,100,5,5,0,0,100,102,3,14,7,0,101,99,1,0,0,0,102,105,1,0,0,0,103,
    101,1,0,0,0,103,104,1,0,0,0,104,107,1,0,0,0,105,103,1,0,0,0,106,98,1,
    0,0,0,106,107,1,0,0,0,107,108,1,0,0,0,108,109,5,10,0,0,109,13,1,0,0,0,
    110,111,5,15,0,0,111,112,5,3,0,0,112,115,3,2,1,0,113,115,3,2,1,0,114,
    110,1,0,0,0,114,113,1,0,0,0,115,15,1,0,0,0,116,117,3,18,9,0,117,118,5,
    11,0,0,118,123,3,18,9,0,119,120,5,11,0,0,120,122,3,18,9,0,121,119,1,0,
    0,0,122,125,1,0,0,0,123,121,1,0,0,0,123,124,1,0,0,0,124,17,1,0,0,0,125,
    123,1,0,0,0,126,127,5,15,0,0,127,128,5,3,0,0,128,133,3,12,6,0,129,130,
    5,4,0,0,130,132,3,12,6,0,131,129,1,0,0,0,132,135,1,0,0,0,133,131,1,0,
    0,0,133,134,1,0,0,0,134,136,1,0,0,0,135,133,1,0,0,0,136,137,3,8,4,0,137,
    150,1,0,0,0,138,143,3,12,6,0,139,140,5,4,0,0,140,142,3,12,6,0,141,139,
    1,0,0,0,142,145,1,0,0,0,143,141,1,0,0,0,143,144,1,0,0,0,144,146,1,0,0,
    0,145,143,1,0,0,0,146,147,3,8,4,0,147,150,1,0,0,0,148,150,3,2,1,0,149,
    126,1,0,0,0,149,138,1,0,0,0,149,148,1,0,0,0,150,19,1,0,0,0,151,152,3,
    12,6,0,152,153,3,8,4,0,153,21,1,0,0,0,18,25,39,41,53,65,70,78,81,85,91,
    94,103,106,114,123,133,143,149
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) {
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  dae_configParserStaticData = staticData.release();
}

}

dae_configParser::dae_configParser(TokenStream *input) : dae_configParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

dae_configParser::dae_configParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  dae_configParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *dae_configParserStaticData->atn, dae_configParserStaticData->decisionToDFA, dae_configParserStaticData->sharedContextCache, options);
}

dae_configParser::~dae_configParser() {
  delete _interpreter;
}

const atn::ATN& dae_configParser::getATN() const {
  return *dae_configParserStaticData->atn;
}

std::string dae_configParser::getGrammarFileName() const {
  return "dae_config.g4";
}

const std::vector<std::string>& dae_configParser::getRuleNames() const {
  return dae_configParserStaticData->ruleNames;
}

const dfa::Vocabulary& dae_configParser::getVocabulary() const {
  return dae_configParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView dae_configParser::getSerializedATN() const {
  return dae_configParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

dae_configParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* dae_configParser::StartContext::EOF() {
  return getToken(dae_configParser::EOF, 0);
}

std::vector<dae_configParser::ExpressionContext *> dae_configParser::StartContext::expression() {
  return getRuleContexts<dae_configParser::ExpressionContext>();
}

dae_configParser::ExpressionContext* dae_configParser::StartContext::expression(size_t i) {
  return getRuleContext<dae_configParser::ExpressionContext>(i);
}


size_t dae_configParser::StartContext::getRuleIndex() const {
  return dae_configParser::RuleStart;
}

void dae_configParser::StartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStart(this);
}

void dae_configParser::StartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStart(this);
}

dae_configParser::StartContext* dae_configParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, dae_configParser::RuleStart);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(25);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == dae_configParser::ID) {
      setState(22);
      expression();
      setState(27);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(28);
    match(dae_configParser::EOF);

  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

dae_configParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* dae_configParser::LiteralContext::ID() {
  return getToken(dae_configParser::ID, 0);
}

tree::TerminalNode* dae_configParser::LiteralContext::NON_ID() {
  return getToken(dae_configParser::NON_ID, 0);
}

tree::TerminalNode* dae_configParser::LiteralContext::QUOTE_STRING() {
  return getToken(dae_configParser::QUOTE_STRING, 0);
}


size_t dae_configParser::LiteralContext::getRuleIndex() const {
  return dae_configParser::RuleLiteral;
}

void dae_configParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void dae_configParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

dae_configParser::LiteralContext* dae_configParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 2, dae_configParser::RuleLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(30);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 229376) != 0)) {
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

//----------------- ExpressionContext ------------------------------------------------------------------

dae_configParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* dae_configParser::ExpressionContext::ID() {
  return getToken(dae_configParser::ID, 0);
}

std::vector<dae_configParser::ArrowExpressionContext *> dae_configParser::ExpressionContext::arrowExpression() {
  return getRuleContexts<dae_configParser::ArrowExpressionContext>();
}

dae_configParser::ArrowExpressionContext* dae_configParser::ExpressionContext::arrowExpression(size_t i) {
  return getRuleContext<dae_configParser::ArrowExpressionContext>(i);
}

std::vector<dae_configParser::DeclarationContext *> dae_configParser::ExpressionContext::declaration() {
  return getRuleContexts<dae_configParser::DeclarationContext>();
}

dae_configParser::DeclarationContext* dae_configParser::ExpressionContext::declaration(size_t i) {
  return getRuleContext<dae_configParser::DeclarationContext>(i);
}

std::vector<dae_configParser::StandaloneFunctionContext *> dae_configParser::ExpressionContext::standaloneFunction() {
  return getRuleContexts<dae_configParser::StandaloneFunctionContext>();
}

dae_configParser::StandaloneFunctionContext* dae_configParser::ExpressionContext::standaloneFunction(size_t i) {
  return getRuleContext<dae_configParser::StandaloneFunctionContext>(i);
}

std::vector<dae_configParser::LiteralContext *> dae_configParser::ExpressionContext::literal() {
  return getRuleContexts<dae_configParser::LiteralContext>();
}

dae_configParser::LiteralContext* dae_configParser::ExpressionContext::literal(size_t i) {
  return getRuleContext<dae_configParser::LiteralContext>(i);
}

std::vector<dae_configParser::ExpressionContext *> dae_configParser::ExpressionContext::expression() {
  return getRuleContexts<dae_configParser::ExpressionContext>();
}

dae_configParser::ExpressionContext* dae_configParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<dae_configParser::ExpressionContext>(i);
}


size_t dae_configParser::ExpressionContext::getRuleIndex() const {
  return dae_configParser::RuleExpression;
}

void dae_configParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void dae_configParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

dae_configParser::ExpressionContext* dae_configParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 4, dae_configParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(32);
    match(dae_configParser::ID);
    setState(33);
    match(dae_configParser::T__0);
    setState(41);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 229632) != 0) {
      setState(39);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
      case 1: {
        setState(34);
        arrowExpression();
        break;
      }

      case 2: {
        setState(35);
        declaration();
        break;
      }

      case 3: {
        setState(36);
        standaloneFunction();
        break;
      }

      case 4: {
        setState(37);
        literal();
        break;
      }

      case 5: {
        setState(38);
        expression();
        break;
      }

      default:
        break;
      }
      setState(43);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(44);
    match(dae_configParser::T__1);

  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

dae_configParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dae_configParser::FunctionPrototypeContext *> dae_configParser::DeclarationContext::functionPrototype() {
  return getRuleContexts<dae_configParser::FunctionPrototypeContext>();
}

dae_configParser::FunctionPrototypeContext* dae_configParser::DeclarationContext::functionPrototype(size_t i) {
  return getRuleContext<dae_configParser::FunctionPrototypeContext>(i);
}

dae_configParser::OptAnnotationContext* dae_configParser::DeclarationContext::optAnnotation() {
  return getRuleContext<dae_configParser::OptAnnotationContext>(0);
}

tree::TerminalNode* dae_configParser::DeclarationContext::ID() {
  return getToken(dae_configParser::ID, 0);
}

tree::TerminalNode* dae_configParser::DeclarationContext::NON_ID() {
  return getToken(dae_configParser::NON_ID, 0);
}

tree::TerminalNode* dae_configParser::DeclarationContext::QUOTE_STRING() {
  return getToken(dae_configParser::QUOTE_STRING, 0);
}

std::vector<dae_configParser::LiteralContext *> dae_configParser::DeclarationContext::literal() {
  return getRuleContexts<dae_configParser::LiteralContext>();
}

dae_configParser::LiteralContext* dae_configParser::DeclarationContext::literal(size_t i) {
  return getRuleContext<dae_configParser::LiteralContext>(i);
}


size_t dae_configParser::DeclarationContext::getRuleIndex() const {
  return dae_configParser::RuleDeclaration;
}

void dae_configParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void dae_configParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}

dae_configParser::DeclarationContext* dae_configParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, dae_configParser::RuleDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(70);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(46);
      antlrcpp::downCast<DeclarationContext *>(_localctx)->key = _input->LT(1);
      _la = _input->LA(1);
      if (!(((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 229376) != 0)) {
        antlrcpp::downCast<DeclarationContext *>(_localctx)->key = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(47);
      match(dae_configParser::T__2);
      setState(48);
      functionPrototype();
      setState(53);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == dae_configParser::T__3) {
        setState(49);
        match(dae_configParser::T__3);
        setState(50);
        functionPrototype();
        setState(55);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(56);
      optAnnotation();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(58);
      antlrcpp::downCast<DeclarationContext *>(_localctx)->key = _input->LT(1);
      _la = _input->LA(1);
      if (!(((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 229376) != 0)) {
        antlrcpp::downCast<DeclarationContext *>(_localctx)->key = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(59);
      match(dae_configParser::T__2);
      setState(60);
      literal();
      setState(65);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == dae_configParser::T__4) {
        setState(61);
        match(dae_configParser::T__4);
        setState(62);
        literal();
        setState(67);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(68);
      optAnnotation();
      break;
    }

    default:
      break;
    }

  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptAnnotationContext ------------------------------------------------------------------

dae_configParser::OptAnnotationContext::OptAnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dae_configParser::AnnotationParameterContext *> dae_configParser::OptAnnotationContext::annotationParameter() {
  return getRuleContexts<dae_configParser::AnnotationParameterContext>();
}

dae_configParser::AnnotationParameterContext* dae_configParser::OptAnnotationContext::annotationParameter(size_t i) {
  return getRuleContext<dae_configParser::AnnotationParameterContext>(i);
}


size_t dae_configParser::OptAnnotationContext::getRuleIndex() const {
  return dae_configParser::RuleOptAnnotation;
}

void dae_configParser::OptAnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptAnnotation(this);
}

void dae_configParser::OptAnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptAnnotation(this);
}

dae_configParser::OptAnnotationContext* dae_configParser::optAnnotation() {
  OptAnnotationContext *_localctx = _tracker.createInstance<OptAnnotationContext>(_ctx, getState());
  enterRule(_localctx, 8, dae_configParser::RuleOptAnnotation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(85);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case dae_configParser::T__5: {
        enterOuterAlt(_localctx, 1);
        setState(72);
        match(dae_configParser::T__5);
        setState(81);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 229376) != 0) {
          setState(73);
          annotationParameter();
          setState(78);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == dae_configParser::T__4) {
            setState(74);
            match(dae_configParser::T__4);
            setState(75);
            annotationParameter();
            setState(80);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(83);
        match(dae_configParser::T__6);
        break;
      }

      case dae_configParser::T__1:
      case dae_configParser::T__7:
      case dae_configParser::T__10:
      case dae_configParser::ID:
      case dae_configParser::NON_ID:
      case dae_configParser::QUOTE_STRING: {
        enterOuterAlt(_localctx, 2);

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

//----------------- AnnotationParameterContext ------------------------------------------------------------------

dae_configParser::AnnotationParameterContext::AnnotationParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dae_configParser::ParameterContext* dae_configParser::AnnotationParameterContext::parameter() {
  return getRuleContext<dae_configParser::ParameterContext>(0);
}

tree::TerminalNode* dae_configParser::AnnotationParameterContext::ID() {
  return getToken(dae_configParser::ID, 0);
}

dae_configParser::FunctionPrototypeContext* dae_configParser::AnnotationParameterContext::functionPrototype() {
  return getRuleContext<dae_configParser::FunctionPrototypeContext>(0);
}


size_t dae_configParser::AnnotationParameterContext::getRuleIndex() const {
  return dae_configParser::RuleAnnotationParameter;
}

void dae_configParser::AnnotationParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationParameter(this);
}

void dae_configParser::AnnotationParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationParameter(this);
}

dae_configParser::AnnotationParameterContext* dae_configParser::annotationParameter() {
  AnnotationParameterContext *_localctx = _tracker.createInstance<AnnotationParameterContext>(_ctx, getState());
  enterRule(_localctx, 10, dae_configParser::RuleAnnotationParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(91);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(87);
      parameter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(88);
      match(dae_configParser::ID);
      setState(89);
      match(dae_configParser::T__2);
      setState(90);
      functionPrototype();
      break;
    }

    default:
      break;
    }

  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionPrototypeContext ------------------------------------------------------------------

dae_configParser::FunctionPrototypeContext::FunctionPrototypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* dae_configParser::FunctionPrototypeContext::ID() {
  return getToken(dae_configParser::ID, 0);
}

tree::TerminalNode* dae_configParser::FunctionPrototypeContext::NON_ID() {
  return getToken(dae_configParser::NON_ID, 0);
}

tree::TerminalNode* dae_configParser::FunctionPrototypeContext::QUOTE_STRING() {
  return getToken(dae_configParser::QUOTE_STRING, 0);
}

std::vector<dae_configParser::ParameterContext *> dae_configParser::FunctionPrototypeContext::parameter() {
  return getRuleContexts<dae_configParser::ParameterContext>();
}

dae_configParser::ParameterContext* dae_configParser::FunctionPrototypeContext::parameter(size_t i) {
  return getRuleContext<dae_configParser::ParameterContext>(i);
}


size_t dae_configParser::FunctionPrototypeContext::getRuleIndex() const {
  return dae_configParser::RuleFunctionPrototype;
}

void dae_configParser::FunctionPrototypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionPrototype(this);
}

void dae_configParser::FunctionPrototypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionPrototype(this);
}

dae_configParser::FunctionPrototypeContext* dae_configParser::functionPrototype() {
  FunctionPrototypeContext *_localctx = _tracker.createInstance<FunctionPrototypeContext>(_ctx, getState());
  enterRule(_localctx, 12, dae_configParser::RuleFunctionPrototype);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == dae_configParser::T__7) {
      setState(93);
      match(dae_configParser::T__7);
    }
    setState(96);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 229376) != 0)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(97);
    match(dae_configParser::T__8);
    setState(106);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 229376) != 0) {
      setState(98);
      parameter();
      setState(103);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == dae_configParser::T__4) {
        setState(99);
        match(dae_configParser::T__4);
        setState(100);
        parameter();
        setState(105);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(108);
    match(dae_configParser::T__9);

  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

dae_configParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* dae_configParser::ParameterContext::ID() {
  return getToken(dae_configParser::ID, 0);
}

dae_configParser::LiteralContext* dae_configParser::ParameterContext::literal() {
  return getRuleContext<dae_configParser::LiteralContext>(0);
}


size_t dae_configParser::ParameterContext::getRuleIndex() const {
  return dae_configParser::RuleParameter;
}

void dae_configParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void dae_configParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}

dae_configParser::ParameterContext* dae_configParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 14, dae_configParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(114);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(110);
      match(dae_configParser::ID);
      setState(111);
      match(dae_configParser::T__2);
      setState(112);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(113);
      literal();
      break;
    }

    default:
      break;
    }

  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrowExpressionContext ------------------------------------------------------------------

dae_configParser::ArrowExpressionContext::ArrowExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<dae_configParser::ArrowOperandContext *> dae_configParser::ArrowExpressionContext::arrowOperand() {
  return getRuleContexts<dae_configParser::ArrowOperandContext>();
}

dae_configParser::ArrowOperandContext* dae_configParser::ArrowExpressionContext::arrowOperand(size_t i) {
  return getRuleContext<dae_configParser::ArrowOperandContext>(i);
}


size_t dae_configParser::ArrowExpressionContext::getRuleIndex() const {
  return dae_configParser::RuleArrowExpression;
}

void dae_configParser::ArrowExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrowExpression(this);
}

void dae_configParser::ArrowExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrowExpression(this);
}

dae_configParser::ArrowExpressionContext* dae_configParser::arrowExpression() {
  ArrowExpressionContext *_localctx = _tracker.createInstance<ArrowExpressionContext>(_ctx, getState());
  enterRule(_localctx, 16, dae_configParser::RuleArrowExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    arrowOperand();
    setState(117);
    match(dae_configParser::T__10);
    setState(118);
    arrowOperand();
    setState(123);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == dae_configParser::T__10) {
      setState(119);
      match(dae_configParser::T__10);
      setState(120);
      arrowOperand();
      setState(125);
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

//----------------- ArrowOperandContext ------------------------------------------------------------------

dae_configParser::ArrowOperandContext::ArrowOperandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* dae_configParser::ArrowOperandContext::ID() {
  return getToken(dae_configParser::ID, 0);
}

std::vector<dae_configParser::FunctionPrototypeContext *> dae_configParser::ArrowOperandContext::functionPrototype() {
  return getRuleContexts<dae_configParser::FunctionPrototypeContext>();
}

dae_configParser::FunctionPrototypeContext* dae_configParser::ArrowOperandContext::functionPrototype(size_t i) {
  return getRuleContext<dae_configParser::FunctionPrototypeContext>(i);
}

dae_configParser::OptAnnotationContext* dae_configParser::ArrowOperandContext::optAnnotation() {
  return getRuleContext<dae_configParser::OptAnnotationContext>(0);
}

dae_configParser::LiteralContext* dae_configParser::ArrowOperandContext::literal() {
  return getRuleContext<dae_configParser::LiteralContext>(0);
}


size_t dae_configParser::ArrowOperandContext::getRuleIndex() const {
  return dae_configParser::RuleArrowOperand;
}

void dae_configParser::ArrowOperandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrowOperand(this);
}

void dae_configParser::ArrowOperandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrowOperand(this);
}

dae_configParser::ArrowOperandContext* dae_configParser::arrowOperand() {
  ArrowOperandContext *_localctx = _tracker.createInstance<ArrowOperandContext>(_ctx, getState());
  enterRule(_localctx, 18, dae_configParser::RuleArrowOperand);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(149);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(126);
      match(dae_configParser::ID);
      setState(127);
      match(dae_configParser::T__2);
      setState(128);
      functionPrototype();
      setState(133);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == dae_configParser::T__3) {
        setState(129);
        match(dae_configParser::T__3);
        setState(130);
        functionPrototype();
        setState(135);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(136);
      optAnnotation();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(138);
      functionPrototype();
      setState(143);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == dae_configParser::T__3) {
        setState(139);
        match(dae_configParser::T__3);
        setState(140);
        functionPrototype();
        setState(145);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(146);
      optAnnotation();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(148);
      literal();
      break;
    }

    default:
      break;
    }

  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StandaloneFunctionContext ------------------------------------------------------------------

dae_configParser::StandaloneFunctionContext::StandaloneFunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

dae_configParser::FunctionPrototypeContext* dae_configParser::StandaloneFunctionContext::functionPrototype() {
  return getRuleContext<dae_configParser::FunctionPrototypeContext>(0);
}

dae_configParser::OptAnnotationContext* dae_configParser::StandaloneFunctionContext::optAnnotation() {
  return getRuleContext<dae_configParser::OptAnnotationContext>(0);
}


size_t dae_configParser::StandaloneFunctionContext::getRuleIndex() const {
  return dae_configParser::RuleStandaloneFunction;
}

void dae_configParser::StandaloneFunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStandaloneFunction(this);
}

void dae_configParser::StandaloneFunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<dae_configListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStandaloneFunction(this);
}

dae_configParser::StandaloneFunctionContext* dae_configParser::standaloneFunction() {
  StandaloneFunctionContext *_localctx = _tracker.createInstance<StandaloneFunctionContext>(_ctx, getState());
  enterRule(_localctx, 20, dae_configParser::RuleStandaloneFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(151);
    functionPrototype();
    setState(152);
    optAnnotation();

  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void dae_configParser::initialize() {
  ::antlr4::internal::call_once(dae_configParserOnceFlag, dae_configParserInitialize);
}
