//write a program to take input from the user from 1 to 7 and display the weeks accordingly else invalid choice.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number for the weeek day to be checked";
    cin>>n;
    if(n==1){
    cout<<"Monday";
}
    else if(n==2){
    cout<<"Tuesday";
}
    else if(n==3){
    cout<<"Wednesday";
}
    else if(n==4){
    cout<<"thursday";
}
    else if(n==5){
    cout<<"friday";

}
    else if(n==6){
    cout<<"saturday";
}
    else if(n==7){
    cout<<"sunday";
}
    else{
    cout<<"invalid entry";
}
    return 0;
    
}
