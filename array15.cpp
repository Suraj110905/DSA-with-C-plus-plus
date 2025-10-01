//sum of array elements

#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 6, 2, 8, 4};
    int n = 5;

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Sum of elements: " << sum;
    return 0;
}
