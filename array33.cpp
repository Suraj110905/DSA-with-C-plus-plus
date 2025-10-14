//replace negative numbers with zero
#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, -3, 7, -1, 0};
    int n = 5;

    cout << "Updated Array: ";
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0)
            arr[i] = 0;
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
