//write a program to print n natural numbers by taking input from the user
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    for(int count=1;count<=n;count=count+1){
       cout<<count<<endl; 
    }return 0;
}