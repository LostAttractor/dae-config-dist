
// Generated from dae_config.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "dae_configParser.h"


namespace dae_config {

/**
 * This interface defines an abstract listener for a parse tree produced by dae_configParser.
 */
class  dae_configListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStart(dae_configParser::StartContext *ctx) = 0;
  virtual void exitStart(dae_configParser::StartContext *ctx) = 0;

  virtual void enterLiteral(dae_configParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(dae_configParser::LiteralContext *ctx) = 0;

  virtual void enterExpression(dae_configParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(dae_configParser::ExpressionContext *ctx) = 0;

  virtual void enterDeclaration(dae_configParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(dae_configParser::DeclarationContext *ctx) = 0;

  virtual void enterOptAnnotation(dae_configParser::OptAnnotationContext *ctx) = 0;
  virtual void exitOptAnnotation(dae_configParser::OptAnnotationContext *ctx) = 0;

  virtual void enterAnnotationParameter(dae_configParser::AnnotationParameterContext *ctx) = 0;
  virtual void exitAnnotationParameter(dae_configParser::AnnotationParameterContext *ctx) = 0;

  virtual void enterFunctionPrototype(dae_configParser::FunctionPrototypeContext *ctx) = 0;
  virtual void exitFunctionPrototype(dae_configParser::FunctionPrototypeContext *ctx) = 0;

  virtual void enterParameter(dae_configParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(dae_configParser::ParameterContext *ctx) = 0;

  virtual void enterArrowExpression(dae_configParser::ArrowExpressionContext *ctx) = 0;
  virtual void exitArrowExpression(dae_configParser::ArrowExpressionContext *ctx) = 0;

  virtual void enterArrowOperand(dae_configParser::ArrowOperandContext *ctx) = 0;
  virtual void exitArrowOperand(dae_configParser::ArrowOperandContext *ctx) = 0;

  virtual void enterStandaloneFunction(dae_configParser::StandaloneFunctionContext *ctx) = 0;
  virtual void exitStandaloneFunction(dae_configParser::StandaloneFunctionContext *ctx) = 0;


};

}  // namespace dae_config
