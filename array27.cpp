//Find Pairs Whose Sum Equals a Given Number#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 4, 5, 6, 3, 2};
    int n = 6, sum = 7;

    cout << "Pairs with sum " << sum << ": ";
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum)
                cout << "(" << arr[i] << "," << arr[j] << ") ";
        }
    }
    cout << endl;
    return 0;
}
