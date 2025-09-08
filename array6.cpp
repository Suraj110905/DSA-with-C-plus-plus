//wap to rotate 1 place of array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 7, 1, -11, 8, 13};
    int n = sizeof(arr) / sizeof(arr[0]); // length of array

    int num = arr[n - 1]; // last element

    // shift elements right
    for (int i = n - 2; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    // put last element at first position
    arr[0] = num;

    // print rotated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
