#include <bits/stdc++.h>
using namespace std;

// Recursive function to find the minimum element in an array
int getMin(int arr[], int n) {
    if (n == 1)
        return arr[0];  // Base case: when array size is 1, return the element
    return min(arr[n - 1], getMin(arr, n - 1));  // Recursive call
}

// Driver code
int main() {
    int arr[] = {34, 5, 89, 90, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum element: " << getMin(arr, n) << endl;
    return 0;
}
