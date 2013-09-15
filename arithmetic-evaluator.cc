//
//  a4q2.cc
//  A4Q2
//
//  Created by Sun Renchen on 2013-07-02.
//  Copyright (c) 2013 University of Waterloo. All rights reserved.
//  This program is designed to read and evaluate arithmetic expressions. There are three kinds of expressions:
//  • lone integers
//  • a unary operation (NEG or ABS, denoting negation and absolute value) applied to an expression
//  • a binary operation (+, -, *, or /) applied to two expressions
//  Expressions will be entered in reverse Polish notation (RPN)
//  Sample Input:
//   1 2 + 3 4 - * ABS NEG
//  Sample Output:
//  -|((1 + 2) * (3 - 4))|
//  = -3

#include <iostream>
#include <string>
#include <sstream>
#include "ExpressionStack.h"
#include "LoneExpression.h"
#include "BinaryExpression.h"
#include "UnaryExpression.h"
#include "Expression.h"

using namespace std;

//This function is used to determine if the input was a number
bool is_number(const string& pszInput)
{
	istringstream iss( pszInput );
    float dTestSink;
    iss >> dTestSink;
	// was any input successfully consumed/converted?
	if ( ! iss )
		return false;
	// was all the input successfully consumed/converted?
	return ( iss.rdbuf()->in_avail() == 0 );
}


int main(int argc, const char * argv[])
{
    ExpressionStack s;//The stack which is used to store the pointer of each kind of expression
    Expression* e;
    string input;//command
    string Final_Expr;//symbol expression
    float value;
    bool exit = false;
    while (cin >> input)
    {
        if (is_number(input))//if it is a number, then create an object of lone expression
        {
            stringstream convert(input);
            float num;
            convert >> num;
            e = new LoneExpression(num);
            if (!s.Push(e))//if the stack was full, then set the exit status to true and then it will terminate the program.
            {
                exit = true;
                break;
            }
        }
        else if (input != "ABS" && input != "NEG")//if it is a binary expression, then pop two objects out of the stack, and create a binary expression
        {
            Expression* right = s.Pop();
            Expression* left = s.Pop();
            e = new BinaryExpression(left, right, input);
            //delete those poped expression
            delete right;
            delete left;
            if (!s.Push(e))
            {
                exit = true;
                break;
            }
        }
        else//if it is a unary expression, then pop one object out of the stack, and create a unary expression.
        {
            Expression* epr = s.Pop();
            e = new UnaryExpression(epr, input);
            delete epr;
            if (!s.Push(e))
            {
                exit = true;
                break;
            }
        }
    }
    if (exit)//check the exit status
        return 0;
    //evaluate the final expression
    Expression* p = s.Pop();
    Final_Expr = p->prettyprint();
    value = p->evaluate();
    cout << Final_Expr << endl;
    cout << "= " << value << endl;
    delete p;
    return 0;
}

