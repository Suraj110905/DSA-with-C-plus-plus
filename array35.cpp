//print only unique numbers
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 3, 4};
    int n = 6;
    bool unique;

    cout << "Unique elements: ";
    for(int i = 0; i < n; i++) {
        unique = true;
        for(int j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                unique = false;
                break;
            }
        }
        if(unique)
            cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
