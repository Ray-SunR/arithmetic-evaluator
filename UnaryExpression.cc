//
//  UnaryExpression.cc
//  A4Q2
//
//  Created by Sun Renchen on 2013-07-02.
//  Copyright (c) 2013 University of Waterloo. All rights reserved.
//

#include "UnaryExpression.h"
//constructor
UnaryExpression::UnaryExpression(Expression* target, std::string opera)
{
    expr = target->prettyprint();
    Value = target->evaluate();
    this->opera = opera;
}

//calculate the representation of the unary expression
std::string UnaryExpression::prettyprint()
{
    std::string expression = expr;
    std::string space(" ");
    std::string LeftPara("(");
    std::string RightPara(")");
    std::string newexpression;
    if (opera == "ABS")
    {
        std::string absolute("|");
        newexpression = absolute + expr + absolute;
    }
    else
    {
        std::string minus = "-";
        newexpression = minus + expr;
    }
    return newexpression;
}

//calculate the value of the unary expression
int  UnaryExpression::evaluate()
{
    if (opera == "ABS")
        return Value > 0? Value : -Value;
    else
        return -Value;
}
