//copy one array to another
#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n = 5;
    int arr2[n];  // new array

    for(int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    cout << "Copied array: ";
    for(int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
