#include <iostream>
using namespace std;

// Function to right rotate the subarray from 'start' to 'end'
void rightRotate(int arr[], int start, int end) {
    int temp = arr[end];
    for (int i = end; i > start; --i)
        arr[i] = arr[i - 1];
    arr[start] = temp;
}

void rearrange(int arr[], int n) {
    int i = 0;

    while (i < n) {
        // If the current index is even and element is negative, or
        // index is odd and element is positive — it's out of place
        if ((i % 2 == 0 && arr[i] >= 0) ||
            (i % 2 != 0 && arr[i] < 0)) {
            int j = i + 1;

            // Find next element with opposite sign
            while (j < n) {
                if ((i % 2 == 0 && arr[j] < 0) ||
                    (i % 2 != 0 && arr[j] >= 0))
                    break;
                j++;
            }

            // If no such element, break
            if (j == n)
                break;

            // Right rotate from i to j
            rightRotate(arr, i, j);
        }
        i++;
    }
}

// Utility to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, -4, -1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    printArray(arr, n);

    return 0;
}
