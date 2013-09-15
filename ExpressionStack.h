//
//  Stack.h
//  A4Q2
//
//  Created by Sun Renchen on 2013-07-02.
//  Copyright (c) 2013 University of Waterloo. All rights reserved.
//

#ifndef __A4Q2__Stack__
#define __A4Q2__Stack__

#include <iostream>
#include "Expression.h"

//class of expression stack
class ExpressionStack
{
private:
    Expression* a[10];//fixed size of 10
    int length;
public:
    Expression* Pop();//pop an element out of the stack
    bool Push(Expression* ptr);//push an element into the stack
    ExpressionStack();
};
#endif /* defined(__A4Q2__Stack__) */
