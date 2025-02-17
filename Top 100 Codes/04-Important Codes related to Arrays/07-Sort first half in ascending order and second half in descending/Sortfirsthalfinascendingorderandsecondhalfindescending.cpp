#include <iostream>
#include <algorithm>

using namespace std;

void customSort(int arr[], int n) {
    // Sort the first half in ascending order
    sort(arr, arr + n / 2);

    // Sort the second half in descending order
    sort(arr + n / 2, arr + n, greater<int>());
}

int main() {
    int arr[] = {7, 2, 9, 1, 5, 6, 3, 8, 4, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    customSort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
