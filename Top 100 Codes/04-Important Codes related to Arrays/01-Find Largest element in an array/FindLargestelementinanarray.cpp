#include <bits/stdc++.h>
using namespace std;

// Recursive function to find the maximum element in an array
int getMax(int arr[], int n) {
    if (n == 1) 
        return arr[0];
    return max(arr[n - 1], getMax(arr, n - 1));
}

int main() {
    int arr[] = {10, 89, 67, 56, 45, 78};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum element: " << getMax(arr, n) << endl;
    return 0;
}
