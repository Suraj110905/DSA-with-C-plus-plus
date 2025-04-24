#include <iostream>
using namespace std;
int main(){
    int package;
    cout<<"enter the package to be checked";
    cin>>package;
    if(package>20){
        cout<<"accepted";
    }
else{
    cout<<"rejected";
}
}