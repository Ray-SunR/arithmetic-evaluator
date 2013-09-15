//
//  Expression.h
//  A4Q2
//
//  Created by Sun Renchen on 2013-07-02.
//  Copyright (c) 2013 University of Waterloo. All rights reserved.
//

#ifndef __A4Q2__Expression__
#define __A4Q2__Expression__

#include <iostream>

class Expression
{
protected:
    std::string expr;//representation of the expression
    int Value;//value of the expression
public:
    virtual std::string prettyprint() = 0;//calculate the representation of the expression
    virtual int evaluate() = 0;//calculate the value of the expression
    virtual ~Expression(){}
};
#endif /* defined(__A4Q2__Expression__) */
