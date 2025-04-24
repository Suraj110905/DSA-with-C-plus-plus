#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number to be checked";//program to check number is even or odd
    cin>>num;
    if(num%2==0){
        //or use logic if(num%2==1)-->it is odd no
        cout<<"Number is even";
    }else{
        cout<<"Number is odd";
    }
}