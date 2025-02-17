#include <bits/stdc++.h>
using namespace std;

int main() {
    // Define and initialize the array
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements

    // Print the array in reverse order
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    cout << endl; // Add a newline for better output formatting
    return 0;
}
