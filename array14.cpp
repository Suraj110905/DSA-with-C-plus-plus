//to find the largest element in given array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = 5;

    int largest = arr[0]; // assume first element is largest
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << "Largest element: " << largest;
    return 0;
}
