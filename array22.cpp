//print alternate elements
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;

    cout << "Alternate elements: ";
    for (int i = 0; i < n; i += 2) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
