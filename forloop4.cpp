//print all even number upto n
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int count=2;count<=n;count=count+2){
        cout<<count<<endl;
    }
}