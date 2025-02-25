#include <iostream>
using namespace std;

// Function to reverse a portion of the array
void reverseArray(int arr[], int start, int end) {
    for (int i = start, j = end; i < j; i++, j--) {
        swap(arr[i], arr[j]);
    }
}

// Function for left rotation by 'd' positions
void leftRotate(int arr[], int n, int d) {
    d = d % n;  // Handle cases where d > n

    // Step 1: Reverse first 'd' elements
    reverseArray(arr, 0, d - 1);
    // Step 2: Reverse remaining 'n-d' elements
    reverseArray(arr, d, n - 1);
    // Step 3: Reverse entire array
    reverseArray(arr, 0, n - 1);
}

// Function for right rotation by 'd' positions
void rightRotate(int arr[], int n, int d) {
    d = d % n;  // Handle cases where d > n

    // Step 1: Reverse last 'd' elements
    reverseArray(arr, n - d, n - 1);
    // Step 2: Reverse first 'n-d' elements
    reverseArray(arr, 0, n - d - 1);
    // Step 3: Reverse entire array
    reverseArray(arr, 0, n - 1);
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d;

    cout << "Enter the number of positions to rotate: ";
    cin >> d;

    int leftArr[n], rightArr[n];
    
    // Copy original array to perform rotations
    for (int i = 0; i < n; i++) {
        leftArr[i] = arr[i];
        rightArr[i] = arr[i];
    }

    // Perform rotations
    leftRotate(leftArr, n, d);
    rightRotate(rightArr, n, d);

    cout << "Array after left rotation by " << d << " positions: ";
    printArray(leftArr, n);

    cout << "Array after right rotation by " << d << " positions: ";
    printArray(rightArr, n);

    return 0;
}
