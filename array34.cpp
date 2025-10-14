// count numbers greater than given value
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = 4, x, count = 0;

    cout << "Enter a number: ";
    cin >> x;

    for(int i = 0; i < n; i++) {
        if(arr[i] > x)
            count++;
    }

    cout << count << " elements are greater than " << x << endl;
    return 0;
}
