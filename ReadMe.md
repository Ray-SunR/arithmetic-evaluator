Contributor: Renchen(Ray) Sun

==Installation==
-------------------
Clone to your own directory, unzip it and compile this program in this way:

make

A executable program named arithmetic-evaluator would be generated. 

If you want to clean those generated files

make clean

==Instruction==
------------------
This program could evaluate and print out  arthmetic expression. There are three kinds of expressions that could be accepted.

*Lone integers
*A unary operation (Denoted as NEG and ABS) applied to an expression
*Binary expression (+, -, *, /) applied to two expressions

Expressions are expected to be entered in Reverse Polish Notation (RPN), in which its operations are entered after its operands. 
E.g

12 34 7 + * ABS

denotes the expression: | 12 * (34 + 7) |.

This program will read in expressions and convert them into conventional infix expression, evaluate then, and print its value. 
E.g

Input:
2 8 + 10 - 5 * NEG ABS

Output:
| - (5 * ( 10 - (2 + 8) ) ) | = 0

==Note==
This arthmetic expression evaluator handle ten elements at a time, which means when you try to enter more than 10 elements such as this:

1 2 3 4 5 6 7 8 9 10 11

"Stack overflow" would be displayed on the screen. 

==Tests==
Test cases are all in the Test folder. If you want to test this program by using those test cases, you should use runSuite which is provided for you as well. Run the program in this way:

./runSuite Test/suiteq2.txt arithmetic-evaluator

Want to know more about the usage of runSuite. Take a look at https://github.com/Ray-SunR/Runsuite

==Example==

Input:

2 5 + 1 * 10 1 / - 2 1 0 - / +

Output:

((((2 + 5) * 1) - (10 / 1)) + (2 / (1 - 0)))
= -1
