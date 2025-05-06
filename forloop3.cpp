#include <iostream>//program to take how many numbers to be printed and the numbers are printed that will also show its square
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int count=1;count<=10;count=count+1){
        cout<<count<<" Square is: "<<count*count<<endl;
    }
}