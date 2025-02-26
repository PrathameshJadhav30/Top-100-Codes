#include <iostream>
using namespace std;

// Function to swap two subarrays
void swapBlocks(int arr[], int start1, int start2, int size) {
    for (int i = 0; i < size; i++) {
        swap(arr[start1 + i], arr[start2 + i]);
    }
}

// Block Swap Algorithm for array rotation
void blockSwapRotate(int arr[], int n, int d) {
    if (d == 0 || d == n) 
       return; // No rotation needed
    
    int i = d, j = n - d;

    while (i != j) {
        if (i < j) { 
            swapBlocks(arr, d - i, d + j - i, i);
            j -= i;
        } else { 
            swapBlocks(arr, d - i, d, j);
            i -= j;
        }
    }
    swapBlocks(arr, d - i, d, i);
}

// Function to print the array
void Display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Driver Code
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 3; // Rotate left by 3 positions

    cout << "Original Array: ";
    Display(arr, n);

    blockSwapRotate(arr, n, d);

    cout << "Rotated Array: ";
    Display(arr, n);

    return 0;
}
