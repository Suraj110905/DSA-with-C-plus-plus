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

//alternative code
for(i=6;i<=60;i=i+6){
    cout<<i;
}
//taking input from user
for(i=n;i<=10*n;i=i+n)