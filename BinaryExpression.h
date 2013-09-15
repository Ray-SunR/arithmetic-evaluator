//
//  BinaryExpression.h
//  A4Q2
//
//  Created by Sun Renchen on 2013-07-02.
//  Copyright (c) 2013 University of Waterloo. All rights reserved.
//

#ifndef __A4Q2__BinaryExpression__
#define __A4Q2__BinaryExpression__

#include <iostream>
#include "Expression.h"

class BinaryExpression:public Expression
{
private:
    int Left_Val;//the value of left expression
    int Right_Val;//the value of right expression
    std::string Left_expr;//representation of left expression
    std::string Right_expr;//representation of right expression
    std::string opera;//the operator of binary expression
public:
    BinaryExpression(Expression* Left, Expression* Right, std::string opera);
    std::string prettyprint();
    int evaluate();
    ~BinaryExpression(){}
};


#endif /* defined(__A4Q2__BinaryExpression__) */
