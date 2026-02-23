#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"number daalo guru";
    cin>>n;
    
    //array banao jii
    int arr[n] = {2,4,7,1,4};
    int i=0,j=5;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}