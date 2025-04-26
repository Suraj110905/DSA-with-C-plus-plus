# include <iostream>
using namespace std;
int main(){
    //program to check if number is positive(+ve) , zero(0) else negative(-ve)
    int num;
    cout<<"enter the number to be checked";
    cin>>num;
    if(num>0){
        cout<<"Number is positive";
    }else if(num==0){
        cout<<"Number is zero";
    }else{
        cout<<"Number is negative";
    }
}