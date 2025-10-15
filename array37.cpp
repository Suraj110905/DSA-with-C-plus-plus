//find second smallest element
#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 13, 1, 10, 34, 1};
    int n = 6;
    int first = INT_MAX, second = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] < first) {
            second = first;
            first = arr[i];
        } else if(arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }

    cout << "Second Smallest = " << second << endl;
    return 0;
}
