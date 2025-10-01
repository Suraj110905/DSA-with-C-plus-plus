//count even and odd numbers in an array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 15, 20, 25, 30};
    int n = 5;

    int evenCount = 0, oddCount = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;

    return 0;
}









