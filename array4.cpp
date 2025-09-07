//print only all odd number of array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 10, 8, 13};   // given array
    int n = sizeof(arr) / sizeof(arr[0]);  // number of elements

    cout << "Odd numbers in the array: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 1 || arr[i] % 2 == -1) { // check odd
            cout << arr[i] << " ";
        }
    }

    return 0;
}
