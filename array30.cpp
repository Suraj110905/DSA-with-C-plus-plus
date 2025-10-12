//check if array is sorted in ascending order
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    bool sorted = true;

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }

    if(sorted)
        cout << "Array is Sorted" << endl;
    else
        cout << "Array is Not Sorted" << endl;

    return 0;
}
