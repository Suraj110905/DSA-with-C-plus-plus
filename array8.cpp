//wap to search an element in an array
#include <iostream>
using namespace std;

int main() {
    int n, key;

    // Step 1: Take array size
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    // Step 2: Input elements
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 3: Input element to search
    cout << "Enter element to search: ";
    cin >> key;

    // Step 4: Linear Search
    bool found = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at position " << i << endl;
            found = true;
            break; // stop after finding first match
        }
    }

    // Step 5: If not found
    if(!found) {
        cout << "Element not found in array." << endl;
    }

    return 0;
}
