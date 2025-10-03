//count positive and negative numbers
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, -5, 20, -8, 15};
    int n = 5;

    int posCount = 0, negCount = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] >= 0)
            posCount++;
        else
            negCount++;
    }

    cout << "Positive numbers: " << posCount << endl;
    cout << "Negative numbers: " << negCount << endl;

    return 0;
}
