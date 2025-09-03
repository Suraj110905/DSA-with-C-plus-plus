//wap to calculate the square and cube using inline functiom
#include <iostream>
using namespace std;
inline int square(int a)//declaration of inline function using inline keyword
{
    return a*a;
}
inline int cube(int a)//declaration of inline function again for another part
{
    return a*a*a;
}
int main()
{
    cout<<"\n square of 5 = "<<square(5);
    cout<<"\n cube of 5 = "<<cube(5);
    return 0;
}