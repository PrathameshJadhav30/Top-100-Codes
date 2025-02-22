#include <iostream>
using namespace std;

void findSymmetricElements(int arr[], int n) {
    cout << "Symmetric elements in the array: ";
    bool found = false;
    
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] == arr[n - i - 1]) {
            cout << arr[i] << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "None";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1};  // Predefined array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    findSymmetricElements(arr, n);

    return 0;
}
