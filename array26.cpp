//Count Prime Numbers in an Array
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if(num < 2) return false;
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7};
    int n = 6, count = 0;

    for(int i = 0; i < n; i++) {
        if(isPrime(arr[i]))
            count++;
    }

    cout << "Total prime numbers: " << count << endl;
    return 0;
}
