//write a program to print factorial of n number
#include<iostream>
using namespace std;
int main(){
    int n,count;
    cout<<"enter the number";
    cin>>n;
    count=1;
    for(int i=1;i<=n;i=i+1){
        count=count*i;
    }
    cout<<count;

}