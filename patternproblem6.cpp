#include <iostream>
using namespace std;
int main(){
    for(int row=1;row<=5;row++){
        for(int col=1;col<=6;col++){
            cout<<col*col*col<<" ";
        }
        cout<<endl;
    }
}