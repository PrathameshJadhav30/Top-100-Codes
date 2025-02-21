#include <bits/stdc++.h>

using namespace std;

int main() {
    // Define two arrays
    int arr1[] = {1, 2, 6, 3, 7};
    int arr2[] = {10, 7, 45, 3, 7};

    int n = sizeof(arr1) / sizeof(arr1[0]);  // Get array size

    // Sort arr1 in ascending order
    sort(arr1, arr1 + n);

    // Sort arr2 in descending order
    sort(arr2, arr2 + n, greater<int>());

    int product = 0;  // Variable to store the sum of products

    // Compute the sum of products of corresponding elements
    for (int i = 0; i < n; i++) {
        product += arr1[i] * arr2[i];
    }

    // Print the final result
    cout << "Minimum Sum of Product: " << product << endl;

    return 0;
}
