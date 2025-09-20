
//rotate the array by 1
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // store last element
    int last = arr[n - 1];

    // shift elements to the right
    for(int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];

    }

    // put last element in front
    arr[0] = last;

    // print rotated array
    cout << "Rotated array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
