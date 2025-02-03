#include <bits/stdc++.h> // Standard header file for competitive programming
using namespace std;

int smallest_element(int n, int arr[]) {
    // Base case: If the array has only one element, return that element
    if (n == 1) 
        return arr[0];

    // Recursive case: Compare the last element with the smallest in the remaining array
    return min(arr[n - 1], smallest_element(n - 1, arr));
}

int main() {
    // Input array
    int arr[] = {10, 45, 78, 34, 67};
    
    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Find and print the smallest element in the array
    cout << "Smallest Element is " << smallest_element(n, arr) << endl;

    return 0;
}
