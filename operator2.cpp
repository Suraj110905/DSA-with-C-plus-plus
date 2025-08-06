//2) Relational Operators : are used for the comparison of the values of two operands. For example, '>' check right operand is greater.
/*
Name	                Symbol	Description
Is Equal To	              ==	Checks both operands are equal
Greater Than	          >	    Checks first operand is greater than the second operand
Greater Than or Equal To  >=	Checks first operand is greater than equal to the second operand
Less Than	              <	    Checks first operand is lesser than the second operand
Less Than or Equal To	  <=	Checks first operand is lesser than equal to the second operand
Not Equal To	          !=	Checks both operands are not equal
*/

#include <iostream>
using namespace std;
int main(){
    int a = 6, b = 4;

    //Equal operator
    cout << "a == b is " << (a == b) << endl;

    //Greater than operator
    cout << "a > b is " << (a > b) << endl;

    //Greater than equal to operator
    cout << "a >= b is " << (a >= b) << endl;

    //lesser than operator
    cout << "a < b is " << (a < b) << endl;

    //Lesser than equal to operator
    cout << "a <= b is " << (a <= b) << endl;

    //Not equal to operator
    cout << "a != b is " << (a != b) << endl;

    return 0;
}

//output
/*
a == b is 0
a > b is 1
a >= b is 1
a < b is 0
a <= b is 0
a != b is 1

Note: 0 denotes false and 1 denotes true.

*/