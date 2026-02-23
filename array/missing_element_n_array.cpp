#include <iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,6};

//step 1 find sum of array

    int sum=0;
    for(int i=0;i<5-1;i++){
        sum = sum + arr[i];
    }
    int ans = 5*(5+1)/2;
    cout<<ans-sum;
}