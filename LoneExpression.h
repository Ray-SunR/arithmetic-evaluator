//
//  LoneInteger.h
//  A4Q2
//
//  Created by Sun Renchen on 2013-07-02.
//  Copyright (c) 2013 University of Waterloo. All rights reserved.
//

#ifndef __A4Q2__LoneInteger__
#define __A4Q2__LoneInteger__

#include <iostream>
#include "Expression.h"

//class of lone expression
class LoneExpression:public Expression
{
private:
    int operand;
public:
    LoneExpression(int operand):operand(operand){}
    std::string prettyprint();
    int evaluate();
    ~LoneExpression(){}
};
#endif /* defined(__A4Q2__LoneInteger__) */
