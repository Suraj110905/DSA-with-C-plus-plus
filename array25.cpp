//Count Number of Zeros
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 5, 0, 7, 9, 0};
    int n = 7, count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == 0)
            count++;
    }

    cout << "Number of zeros: " << count << endl;
    return 0;
}
