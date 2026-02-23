#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[5] = {2,5,6,9,4};
    int max_element = INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>max_element){
            max_element = arr[i];
            
        }
    }
    cout<<"max element is : "<<max_element;
}