#include <bits/stdc++.h>
using namespace std;

// Function to sort and display the array
void sortAndPrint(int arr[], int n) {
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 89, 67, 45, 83, 9, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortAndPrint(arr, n);

    return 0;
}
