//reverse of an array
#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,8,7,2,4,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    

    for(int i=n-1 ; i>=0 ; i--){
    cout<<arr[i]<<" ";
    }
}