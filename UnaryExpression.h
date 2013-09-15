//
//  UnaryExpression.h
//  A4Q2
//
//  Created by Sun Renchen on 2013-07-02.
//  Copyright (c) 2013 University of Waterloo. All rights reserved.
//

#ifndef __A4Q2__UnaryExpression__
#define __A4Q2__UnaryExpression__

#include <iostream>
#include "Expression.h"
class UnaryExpression:public Expression
{
private:
    std::string opera;
    std::string expr;
public:
    UnaryExpression(Expression* target, std::string opera);
    std::string prettyprint();
    int evaluate();
    ~UnaryExpression(){}
};
#endif /* defined(__A4Q2__UnaryExpression__) */
