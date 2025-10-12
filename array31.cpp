//difference between laregst and smaleest element

#include <iostream>
using namespace std;

int main() {
    int arr[] = {8, 2, 10, 5};
    int n = 4;
    int minVal = arr[0], maxVal = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < minVal) minVal = arr[i];
        if(arr[i] > maxVal) maxVal = arr[i];
    }

    cout << "Difference (Max - Min) = " << maxVal - minVal << endl;
    return 0;
}
