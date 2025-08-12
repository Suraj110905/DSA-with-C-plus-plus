//find sum of n natural numbers
#include<iostream>
using namespace std;
int main(){
    int n,count;
    cout<<"enter the number";
    cin>>n;
    
    count=0;
    for(int i=1;i<=n;i=i+1){
        count=count+i;
    }
    cout<<count;
}

//shortcut way to print sum of n natural numsrs by using formula
//      cout<<(n*(n+1))/2;