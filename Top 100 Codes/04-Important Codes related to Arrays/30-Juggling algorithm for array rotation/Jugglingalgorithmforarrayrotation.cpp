#include <iostream>
#include <algorithm> // For std::gcd (C++17 and later)
using namespace std;

// Function to rotate array using Juggling Algorithm
void juggleRotate(int arr[], int n, int d) {
    d = d % n; // Handle cases where d >= n
    int gcd = __gcd(n, d); // Find GCD of n and d

    for (int i = 0; i < gcd; i++) {
        int temp = arr[i]; // Store first element of the set
        int j = i;

        while (true) {
            int k = j + d;
            if (k >= n) 
               k -= n; // Wrap around if out of bounds

            if (k == i) 
               break; // If cycle is complete

            arr[j] = arr[k]; // Move next element to current position
            j = k;
        }

        arr[j] = temp; // Place stored value at the correct position
    }
}

// Function to print an array
void Display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver Code
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 3; // Rotate left by 3 positions

    cout << "Original Array: ";
    Display(arr, n);

    juggleRotate(arr, n, d);

    cout << "Rotated Array: ";
    Display(arr, n);

    return 0;
}
