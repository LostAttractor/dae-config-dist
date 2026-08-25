
// Generated from dae_config.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace dae_config {



class  dae_configParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7,
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, WHITESPACE = 12, COMMENT_BLOCK = 13,
    COMMENT_LINE_SHARP = 14, ID = 15, NON_ID = 16, QUOTE_STRING = 17
  };

  enum {
    RuleStart = 0, RuleLiteral = 1, RuleExpression = 2, RuleDeclaration = 3,
    RuleOptAnnotation = 4, RuleAnnotationParameter = 5, RuleFunctionPrototype = 6,
    RuleParameter = 7, RuleArrowExpression = 8, RuleArrowOperand = 9, RuleStandaloneFunction = 10
  };

  explicit dae_configParser(antlr4::TokenStream *input);

  dae_configParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~dae_configParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class StartContext;
  class LiteralContext;
  class ExpressionContext;
  class DeclarationContext;
  class OptAnnotationContext;
  class AnnotationParameterContext;
  class FunctionPrototypeContext;
  class ParameterContext;
  class ArrowExpressionContext;
  class ArrowOperandContext;
  class StandaloneFunctionContext;

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

  };

  StartContext* start();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *NON_ID();
    antlr4::tree::TerminalNode *QUOTE_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

  };

  LiteralContext* literal();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    std::vector<ArrowExpressionContext *> arrowExpression();
    ArrowExpressionContext* arrowExpression(size_t i);
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    std::vector<StandaloneFunctionContext *> standaloneFunction();
    StandaloneFunctionContext* standaloneFunction(size_t i);
    std::vector<LiteralContext *> literal();
    LiteralContext* literal(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

  };

  ExpressionContext* expression();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    std::vector<FunctionPrototypeContext *> functionPrototype();
    FunctionPrototypeContext* functionPrototype(size_t i);
    OptAnnotationContext *optAnnotation();
    std::vector<LiteralContext *> literal();
    LiteralContext* literal(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

  };

  DeclarationContext* declaration();

  class  OptAnnotationContext : public antlr4::ParserRuleContext {
  public:
    OptAnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AnnotationParameterContext *> annotationParameter();
    AnnotationParameterContext* annotationParameter(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

  };

  OptAnnotationContext* optAnnotation();

  class  AnnotationParameterContext : public antlr4::ParserRuleContext {
  public:
    AnnotationParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterContext *parameter();
    antlr4::tree::TerminalNode *ID();
    FunctionPrototypeContext *functionPrototype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

  };

  AnnotationParameterContext* annotationParameter();

  class  FunctionPrototypeContext : public antlr4::ParserRuleContext {
  public:
    FunctionPrototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *NON_ID();
    antlr4::tree::TerminalNode *QUOTE_STRING();
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

  };

  FunctionPrototypeContext* functionPrototype();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    LiteralContext *literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

  };

  ParameterContext* parameter();

  class  ArrowExpressionContext : public antlr4::ParserRuleContext {
  public:
    ArrowExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArrowOperandContext *> arrowOperand();
    ArrowOperandContext* arrowOperand(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

  };

  ArrowExpressionContext* arrowExpression();

  class  ArrowOperandContext : public antlr4::ParserRuleContext {
  public:
    ArrowOperandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    std::vector<FunctionPrototypeContext *> functionPrototype();
    FunctionPrototypeContext* functionPrototype(size_t i);
    OptAnnotationContext *optAnnotation();
    LiteralContext *literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

  };

  ArrowOperandContext* arrowOperand();

  class  StandaloneFunctionContext : public antlr4::ParserRuleContext {
  public:
    StandaloneFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionPrototypeContext *functionPrototype();
    OptAnnotationContext *optAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

  };

  StandaloneFunctionContext* standaloneFunction();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace dae_config
