//wap to add two numers using user define function
# include <iostream>
using namespace std;
void add(int,int);
int main(){
    int a,b;
    cout<<"enter the number";
    cin>>a>>b;
    add(a,b);
    return 0;
}
void add(int a,int b)
{
    int c;
    c=a+b;
    cout<<"\nAddition="<<c;
}