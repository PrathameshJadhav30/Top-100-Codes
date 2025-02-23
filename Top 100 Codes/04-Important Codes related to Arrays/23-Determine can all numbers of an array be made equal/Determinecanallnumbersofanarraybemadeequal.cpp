#include <iostream>
#include <algorithm> // For sort()
#include <numeric>   // Use std::__gcd for C++14 or earlier

using namespace std;

bool canMakeEqual(int arr[], int n) {
    if (n == 1) 
        return true; // A single number is always equal to itself

    // Sort the array to get the smallest element
    sort(arr, arr + n);

    // Calculate GCD of all differences
    int gcdValue = arr[1] - arr[0];
    for (int i = 2; i < n; i++) {
        gcdValue = __gcd(gcdValue, arr[i] - arr[0]); // Use __gcd()
    }

    return gcdValue != 0;  // If GCD is nonzero, they can be made equal
}

int main() {
    int arr[] = {6, 10, 14}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    if (canMakeEqual(arr, n)) {
        cout << "Yes, all numbers can be made equal.\n";
    } else {
        cout << "No, all numbers cannot be made equal.\n";
    }

    return 0;
}
