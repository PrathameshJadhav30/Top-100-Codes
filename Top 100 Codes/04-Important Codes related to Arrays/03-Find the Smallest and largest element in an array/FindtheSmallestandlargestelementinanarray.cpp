#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum element in the array using recursion
int min_element(int arr[], int n) {
    if (n == 1)
        return arr[0];
    return min(arr[n - 1], min_element(arr, n - 1));
}

// Function to find the maximum element in the array using recursion
int max_element(int arr[], int n) {
    if (n == 1)
        return arr[0];
    return max(arr[n - 1], max_element(arr, n - 1));
}

int main() {
    int arr[] = {10, 67, 89, 78, 34, 2, 95};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum element: " << min_element(arr, n) << endl;
    cout << "Maximum element: " << max_element(arr, n) << endl;

    return 0;
}
