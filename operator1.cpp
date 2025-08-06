// 1) Arithmetic operator : are used to perform arithmetic or mathematical operations on the operands. For example, '+' is used for addition.
/*
Name	          Symbol	Description
Addition	       +	Adds two operands.
Subtraction	       -	Subtracts second operand from the first.
Multiplication	   *	Multiplies two operands.
Division	       /	Divides first operand by the second operand.
Modulo Operation   %	Returns the remainder an integer division.
Increment         ++    Increase the value of operand by 1.
Decrement         --    Decrease the value of operand by 1.
*/

# include<iostream>
using namespace std;
int main(){
    int a  = 8, b = 3;

    //Addition 
    cout << "a + b = " << (a+b) << endl;

    //Subtraction
    cout << "a - b = " << (a-b) << endl;

    //Multiplication
    cout << "a * b = " << (a*b) << endl;

    //Division
    cout << "a / b = " << (a/b) << endl;

    //Modulo
    cout << "a % b = " << (a%b) << endl;

    //Post Increment
    cout << "a++ = " << a++ << endl;

    //Pre Increment
    cout << "++a = " << ++a << endl;

    //Post Decrement
    cout << "b-- = " << b-- << endl;

    //Pre Decrement
    cout << "--b = " << --b << endl;

    return 0;
}
//output
/*
a + b = 11
a - b = 5
a * b = 24
a / b = 2
a % b = 2
a++ = 8
++a = 10
b-- = 3
--b = 1
*/