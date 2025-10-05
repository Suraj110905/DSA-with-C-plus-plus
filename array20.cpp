//find second largest number
#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 9, 1, 7, 3};
    int n = 5;
    int largest = arr[0], second = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    cout << "Second largest element: " << second << endl;
    return 0;
}
