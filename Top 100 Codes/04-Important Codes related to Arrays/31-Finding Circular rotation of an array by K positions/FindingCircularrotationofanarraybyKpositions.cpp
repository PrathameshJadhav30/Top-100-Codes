#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;  // Variables for array size and rotation position

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "\nEnter the position for rotation: ";
    cin >> k;

    vector<int> A(n);  // Declare the vector of size n

    cout << "\nEnter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> A[i];

    // Normalize k to avoid out-of-bounds rotations
    k = k % n;
    if (k < 0)
       k += n;  // In case k is negative

    // Perform rotation using reversal algorithm
    reverse(A.begin(), A.end());                // Reverse entire array
    reverse(A.begin(), A.begin() + k);          // Reverse first k elements
    reverse(A.begin() + k, A.end());            // Reverse remaining n-k elements

    // Output the rotated array
    cout << "\nArray after rotation: ";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}
