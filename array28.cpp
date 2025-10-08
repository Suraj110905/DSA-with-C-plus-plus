//Separate Even and Odd Numbers into Two Arrays
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 15, 20, 25, 30};
    int n = 5;
    int even[10], odd[10];
    int e = 0, o = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }

    cout << "Even numbers: ";
    for(int i = 0; i < e; i++)
        cout << even[i] << " ";
    cout << endl;

    cout << "Odd numbers: ";
    for(int i = 0; i < o; i++)
        cout << odd[i] << " ";
    cout << endl;

    return 0;
}
