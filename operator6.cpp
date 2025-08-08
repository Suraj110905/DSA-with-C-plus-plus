//6) Ternary or Conditional Operators : returns the value, based on the condition. This operator takes three operands, therefore it is known as a Ternary Operator.

//Syntax : Expression1 ? Expression2 : Expression3

/*
The ternary operator ? determines the answer on the basis of the evaluation of Expression1.
If Expression1 is true, then Expression2 gets evaluated.
If Expression1 is false, then Expression3 gets evaluated.*/

#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 4;

    // Conditional Operator
    int result = (a < b) ? b : a;
    cout << "The greatest number "
          "is " << result;

    return 0;
}

/*
Output

The greatest number is 4*/