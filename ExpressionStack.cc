//
//  Stack.cpp
//  A4Q2
//
//  Created by Sun Renchen on 2013-07-02.
//  Copyright (c) 2013 University of Waterloo. All rights reserved.
//

#include "ExpressionStack.h"
ExpressionStack::ExpressionStack():length(0)
{
    for (int i = 0; i < 10; i++)
        a[i] = NULL;
}

Expression* ExpressionStack::Pop()
{
    return a[--length];
}

bool ExpressionStack::Push(Expression* ptr)
{
    if (length >= 10)
    {
        std::cerr << "Stack overflow" << std::endl;
        return false;
    }
    a[length++] = ptr;
    return true;
}