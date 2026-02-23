#include <iostream>
#include <climits>
#include<algorithm>
using namespace std;
int main(){
    int arr[5] = {1,9,2,3,4};
    //part 1 find largest element
    int largest = INT_MIN;
    int second = INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    } 
    //second part find second largest
    for(int i=0;i<5;i++){
        if(largest!=arr[i] 
        ){
            second = max(second,arr[i]);
        }
    }
    cout<<second;
}