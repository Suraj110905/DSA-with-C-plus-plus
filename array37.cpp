//count total number of zeroes in array

#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 2, 3, 0};
    int n = 6, count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == 0)
            count++;
    }

    cout << "Zero Count = " << count << endl;
    return 0;
}
