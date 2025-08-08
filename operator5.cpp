//5) Assignement operator : are used to assign value to a variable. We assign the value of right operand into left operand according to which assignment operator we use.

/*
Name                     Symbol           Description

Assignment	               =              Assigns the value on the right to the variable on the left.

Add and Assignment	      +=              First add right operand value into left operand then assign that value into left operand.

Subtract and Assignment	  -=              First subtract right operand value into left operand then assign that value into left operand.

Multiply and Assignment	  *=              First multiply right operand value into left operand then assign that value into left operand.

Divide and Assignment	  /=              First divide right operand value into left operand then assign that value into left operand.*/

#include <iostream>
using namespace std;

int main() {
    int a = 6, b = 4;

    // Assignment Operator.
    cout << "a = " << a << endl;
  
    //  Add and Assignment Operator.
    cout << "a += b is " << (a += b) << endl;
  
    // Subtract and Assignment Operator.
    cout << "a -= b is " << (a -= b) << endl;
  
    //  Multiply and Assignment Operator.
    cout << "a *= b is " << (a *= b) << endl;
  
    //  Divide and Assignment Operator.
    cout << "a /= b is " << (a /= b);

    return 0;
}

/*
Output

a = 6
a += b is 10
a -= b is 6
a *= b is 24
a /= b is 6          */