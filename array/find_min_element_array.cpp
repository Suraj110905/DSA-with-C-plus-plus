#include <iostream>
#include <climits>
using namespace std;
int main(){
     int arr[5] = {2,5,4,6,7};
     int min_element = INT_MAX;
     for(int i=0;i<5;i++){
        if(arr[i]<min_element){
            min_element = arr[i];
        }
     }
     cout<<"min element is : "<<min_element;
     return 0;
}
