//write a program to print fibonacci series 
# include <iostream>
using namespace std;
int main(){
    int n,a,b,c;
    cout<<"enter the number";
    cin>>n;
    a=0;
    b=1;
    c=a+b;
    for(int i=1;i<=n;i=i+1){
        cout<<c;
    }

}