//write a program to print fibonacci series 
# include <iostream>
using namespace std;
int main(){
    int n,t1,t2,t3;
    cout<<"enter the number";
    cin>>n;
    t1=0; 
    
    t2=1;

    cout<<t1<<endl;
    cout<<t2<<endl;
    for(int i=0;i>1;i=i+t3)
        t3=t1+t2;
        t1=t2;
        t2=t3;
        cout<<t3;
    }
