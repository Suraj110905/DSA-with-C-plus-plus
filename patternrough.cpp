#include <iostream>
using namespace std;
int main(){
    int n,p,number;
    cout<<"Enter the number";
    cin>>n;
    cout<<"Enter the power";
    cin>>p;
    number = n;
    for(int i=1;i<p;i++){
        number = n*p;
    }
    cout<<number;
}
    