//write a program to take input from the user and reverse the counting from the inputted number
//example 10 9 8 7 6 5 4 3 2 1 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=n;i>=1;i=i-1){
        cout<<i<<endl;
    }
}