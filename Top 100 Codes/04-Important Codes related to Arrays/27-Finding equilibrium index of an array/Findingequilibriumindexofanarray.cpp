#include <iostream>
using namespace std;

void findEquilibriumIndices(int arr[], int n) {
    int totalSum = 0, leftSum = 0;

    // Calculate total sum of the array
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    cout << "Equilibrium indices: ";
    bool found = false;

    // Traverse the array and check for equilibrium condition
    for (int i = 0; i < n; i++) {
        // Right sum = totalSum - leftSum - arr[i]
        if (leftSum == totalSum - leftSum - arr[i]) {
            cout << i << " ";
            found = true;
        }
        leftSum += arr[i]; // Update left sum
    }

    if (!found) {
        cout << "None";
    }
    cout << endl;
}

int main() {
    int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);

    findEquilibriumIndices(arr, n);
    return 0;
}
