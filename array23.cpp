//Left Rotate the Array by One Position
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int first = arr[0];
    for(int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;

    cout << "Array after left rotation: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
