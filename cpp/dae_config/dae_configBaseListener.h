
// Generated from dae_config.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "dae_configListener.h"


namespace dae_config {

/**
 * This class provides an empty implementation of dae_configListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  dae_configBaseListener : public dae_configListener {
public:

  virtual void enterStart(dae_configParser::StartContext * /*ctx*/) override { }
  virtual void exitStart(dae_configParser::StartContext * /*ctx*/) override { }

  virtual void enterLiteral(dae_configParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(dae_configParser::LiteralContext * /*ctx*/) override { }

  virtual void enterExpression(dae_configParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(dae_configParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterDeclaration(dae_configParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(dae_configParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterOptAnnotation(dae_configParser::OptAnnotationContext * /*ctx*/) override { }
  virtual void exitOptAnnotation(dae_configParser::OptAnnotationContext * /*ctx*/) override { }

  virtual void enterAnnotationParameter(dae_configParser::AnnotationParameterContext * /*ctx*/) override { }
  virtual void exitAnnotationParameter(dae_configParser::AnnotationParameterContext * /*ctx*/) override { }

  virtual void enterFunctionPrototype(dae_configParser::FunctionPrototypeContext * /*ctx*/) override { }
  virtual void exitFunctionPrototype(dae_configParser::FunctionPrototypeContext * /*ctx*/) override { }

  virtual void enterParameter(dae_configParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(dae_configParser::ParameterContext * /*ctx*/) override { }

  virtual void enterArrowExpression(dae_configParser::ArrowExpressionContext * /*ctx*/) override { }
  virtual void exitArrowExpression(dae_configParser::ArrowExpressionContext * /*ctx*/) override { }

  virtual void enterArrowOperand(dae_configParser::ArrowOperandContext * /*ctx*/) override { }
  virtual void exitArrowOperand(dae_configParser::ArrowOperandContext * /*ctx*/) override { }

  virtual void enterStandaloneFunction(dae_configParser::StandaloneFunctionContext * /*ctx*/) override { }
  virtual void exitStandaloneFunction(dae_configParser::StandaloneFunctionContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace dae_config
