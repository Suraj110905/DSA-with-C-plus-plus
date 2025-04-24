#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter the age to be checked";//program to check if a person is eligible to vote or not
    cin>>age;
    if (age>18){
        cout<<"eligible to vote";
    }else{
        cout<<"not eligible to vote";
    }

}