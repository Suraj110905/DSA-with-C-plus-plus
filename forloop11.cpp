//write a program to take input from user of number and it power and display its result using for loop
#include<iostream>
using namespace std;
int main(){
    int n,power,num;
    cout<<"enter the number";
    cin>>n;
    cout<<"enter the power";
    cin>>power;
    num=n;//kyuki jab power increase hoga to use numbers ko store karana padega na
    for(int i=1;i<power;i=i+1){
        num=num*n;
    }
    
    cout<<num;
}
//eg...5=5*5-->25
//       25=25*25-->125
//.....125=12
