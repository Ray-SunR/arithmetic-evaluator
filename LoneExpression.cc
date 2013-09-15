//
//  LoneInteger.cc
//  A4Q2
//
//  Created by Sun Renchen on 2013-07-02.
//  Copyright (c) 2013 University of Waterloo. All rights reserved.
//

#include "LoneExpression.h"
#include <sstream>

std::string LoneExpression::prettyprint()
{
    std::stringstream convert;
    convert << operand;
    return convert.str();
}

int LoneExpression::evaluate()
{
    return operand;
}
