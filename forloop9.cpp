//write a program to take input from the user and the inputted value should not be printed
//ex 10 so 1 2 3 4 5 6 7 8 9
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=n;i<10;i=i+1){
        cout<<i<<endl;
    }
}