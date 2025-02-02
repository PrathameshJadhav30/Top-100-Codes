#include <bits/stdc++.h>
using namespace std;

// Recursive function to find the largest element in an array
int largest_element(int n, int arr[]) {
    if (n == 1)  // Base condition: If only one element, return it
        return arr[0];

    return max(arr[n - 1], largest_element(n - 1, arr)); // Compare last element with recursive result
}

int main() {
    int n;
    
    // Taking user input for array size
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Declare array
    
    // Taking user input for array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display the largest element
    cout << "Largest Element is: " << largest_element(n, arr) << endl;

    return 0;
}
