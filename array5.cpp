//wap to print prime number from array
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)                     // 0, 1 and negative numbers are not prime
        return false;
    for (int i = 2; i * i <= n; i++) {  // check divisors from 2 up to sqrt(n)
        if (n % i == 0)             // if divisible by i, not prime
            return false;
    }
    return true;                    // no divisors found -> prime
}

int main() {
    int arr[] = {2, 7, 11, 10, 8, 13};      // given array
    int n = sizeof(arr) / sizeof(arr[0]);   // number of elements in arr

    cout << "Prime numbers in the array: ";
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {              // call helper function
            cout << arr[i] << " ";         // print if prime
        }
    }
    cout << endl;
    return 0;
}


