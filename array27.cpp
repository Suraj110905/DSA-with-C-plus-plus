//Find Average of Array Elements
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    float average = (float)sum / n;
    cout << "Average of elements: " << average << endl;
    return 0;
}
