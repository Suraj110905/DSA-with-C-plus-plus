//remove minimum element from an array
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 2, 8, 1, 9};
    int n = 5;

    // Step 1: Find index of minimum element
    int minIndex = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[minIndex]) {
            minIndex = i;   // update index of min
        }
    }

    // Step 2: Shift elements to remove minimum
    for(int i = minIndex; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // reduce size

    // Step 3: Print new array
    cout << "Array after removing minimum: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
