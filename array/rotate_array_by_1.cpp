#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array";
    cin>>n;
    int arr[n] = {2,7,4,11,5,8};
    int temp = arr[5];
    
    for(int i=n-2;i>=0;i--){
        arr[i+1] = arr[i];

    }
    arr[0] = temp;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
}