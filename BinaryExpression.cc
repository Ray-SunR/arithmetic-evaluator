//
//  BinaryExpression.cc
//  A4Q2
//
//  Created by Sun Renchen on 2013-07-02.
//  Copyright (c) 2013 University of Waterloo. All rights reserved.
//

#include "BinaryExpression.h"

//constructor
BinaryExpression::BinaryExpression(Expression* Left, Expression* Right, std::string opera)
{
    this->opera = opera;
    Left_expr = Left->prettyprint();
    Right_expr = Right->prettyprint();
    Left_Val = Left->evaluate();
    Right_Val = Right->evaluate();
}

//get the representation of the expression
std::string BinaryExpression::prettyprint()
{
    std::string space(" ");
    std::string LeftPara("(");
    std::string RightPara(")");
    std::string newExpression;
    newExpression = LeftPara + Left_expr + space + opera + space + Right_expr + RightPara;
    return newExpression;
}

//evaluate the result of this binary expresson
int BinaryExpression::evaluate()
{
    if (opera == "+")
        return Left_Val + Right_Val;
    else if (opera == "-")
        return Left_Val - Right_Val;
    else if (opera == "*")
        return Left_Val * Right_Val;
    else
        return Left_Val / Right_Val;
}

