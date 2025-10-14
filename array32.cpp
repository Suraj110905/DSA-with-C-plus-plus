//find sum of all odd numbers
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, sum = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0)
            sum += arr[i];
    }

    cout << "Sum of Odd Numbers = " << sum << endl;
    return 0;
}
