//wap to find second max element of array
#include <iostream>
#include <climits>  // for INT_MIN
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 1: Initialize firstMax and secondMax
    int firstMax = INT_MIN;   // smallest possible number
    int secondMax = INT_MIN;

    // Step 2: Traverse array
    for (int i = 0; i < n; i++) {
        if (arr[i] > firstMax) {
            // Update both
            secondMax = firstMax;
            firstMax = arr[i];
        } 
        else if (arr[i] > secondMax && arr[i] != firstMax) {
            // Update only secondMax
            secondMax = arr[i];
        }
    }

    // Step 3: Print result
    if (secondMax == INT_MIN) {
        cout << "No second maximum element (all elements are same)." << endl;
    } else {
        cout << "Second maximum element is: " << secondMax << endl;
    }

    return 0;
}
