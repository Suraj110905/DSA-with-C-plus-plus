//display array in reverse order
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = 4;

    cout << "Array in Reverse Order: ";
    for(int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
