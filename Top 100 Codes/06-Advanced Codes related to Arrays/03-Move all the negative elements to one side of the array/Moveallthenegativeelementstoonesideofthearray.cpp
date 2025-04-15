#include <iostream>
using namespace std;

void moveNegativesToLeft(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left <= right) {
        // If both elements are already on correct side
        if (arr[left] < 0 && arr[right] >= 0) {
            left++;
            right--;
        }
        // If left is positive and right is negative, swap
        else if (arr[left] >= 0 && arr[right] < 0) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        // If both are negative, move left pointer
        else if (arr[left] < 0 && arr[right] < 0) {
            left++;
        }
        // If both are positive, move right pointer
        else {
            right--;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {1, -2, 3, -4, -5, 6, -7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    moveNegativesToLeft(arr, n);

    cout << "After moving negatives to one side: ";
    printArray(arr, n);

    return 0;
}
