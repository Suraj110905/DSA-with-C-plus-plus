//write a program to take a number input from the user and print its table
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=1;i<=10;i=i+1){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
}