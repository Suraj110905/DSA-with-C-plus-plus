//Bitwise operator(bit level operations)

//are works on bit-level. So, compiler first converted to bit-level and then the calculation is performed on the operands.

/*
Name	         Symbol         	Description
Binary           AND	&	       Copies a bit to the evaluated result if it exists in both operands
Binary           OR	    |	       Copies a bit to the evaluated result if it exists in any of the operand
Binary           XOR	^	       Copies the bit to the evaluated result if it is present in either of the operands but not both
Left Shift	     <<	               Shifts the value to left by the number of bits specified by the right operand.
Right Shift	     >>	               Shifts the value to right by the number of bits specified by the right operand.
One's Complement	    ~	       Changes binary digits 1 to 0 and 0 to 1

*/

#include <iostream>
using namespace std;
int main(){
int a = 6,b = 4;

//Binary AND operator

    cout << "a & b is " << (a & b) << endl;

    // Binary OR operator
    cout << "a | b is " << (a | b) << endl;

    // Binary XOR operator
    cout << "a ^ b is " << (a ^ b) << endl;

    // Left Shift operator
    cout << "a << 1 is " << (a << 1) << endl;

    // Right Shift operator
    cout << "a >> 1 is " << (a >> 1) << endl;

    // One’s Complement operator
    cout << "~(a) is " << ~(a);
}

/*
Output

a & b is 4
a | b is 6
a ^ b is 2
a << 1 is 12
a >> 1 is 3
~(a) is -7             */