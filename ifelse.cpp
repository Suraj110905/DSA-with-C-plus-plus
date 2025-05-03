#include <iostream>//program to enter the package and accept if 20 else reject
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