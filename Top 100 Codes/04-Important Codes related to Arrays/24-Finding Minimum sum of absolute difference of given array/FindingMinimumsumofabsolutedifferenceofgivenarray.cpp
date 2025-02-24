#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int sumOfMinAbsDiff(int arr[], int n) {
    if (n < 2) return 0; // If there's only one element, no difference exists.

    sort(arr, arr + n); // Sorting the array to bring closer elements together
    int sum = 0;

    for (int i = 0; i < n; i++) {
        int leftDiff, rightDiff;

        if (i > 0) {
            leftDiff = abs(arr[i] - arr[i - 1]);
        } else {
            leftDiff = INT_MAX;
        }

        if (i < n - 1) {
            rightDiff = abs(arr[i] - arr[i + 1]);
        } else {
            rightDiff = INT_MAX;
        }

        if (leftDiff < rightDiff) {
            sum += leftDiff;
        } else {
            sum += rightDiff;
        }
    }

    return sum;
}

int main() {
    int arr[] = {4, 2, 1, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of minimum absolute differences: " << sumOfMinAbsDiff(arr, n) << endl;

    return 0;
}
