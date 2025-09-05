//maximum element of an array

#include <iostream>
#include <climits>  // for INT_MIN
using namespace std;

int main() {
    int arr[] = {2, 3, 11, 8, 7, -2};   // array declaration
    int n = sizeof(arr) / sizeof(arr[0]);  // number of elements

    int largest = INT_MIN;  // initialize with smallest integer

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];  // update if bigger element found
        }
    }

    cout << "Maximum element = " << largest << endl;

    return 0;
}
