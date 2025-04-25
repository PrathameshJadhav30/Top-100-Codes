#include <iostream>
#include <vector>
using namespace std;

// Function to merge two subarrays and count inversions
int mergeAndCount(vector<int>& arr, int left, int mid, int right) {
    vector<int> leftSub(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> rightSub(arr.begin() + mid + 1, arr.begin() + right + 1);

    int i = 0, j = 0, k = left, swaps = 0;

    // Merge while counting inversions
    while (i < leftSub.size() && j < rightSub.size()) {
        if (leftSub[i] <= rightSub[j]) {
            arr[k++] = leftSub[i++];
        } else {
            arr[k++] = rightSub[j++];
            swaps += (leftSub.size() - i); // Count the inversions
        }
    }

    // Copy remaining elements
    while (i < leftSub.size()) arr[k++] = leftSub[i++];
    while (j < rightSub.size()) arr[k++] = rightSub[j++];

    return swaps;
}

// Recursive merge sort function to count inversions
int mergeSortAndCount(vector<int>& arr, int left, int right) {
    int count = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;

        count += mergeSortAndCount(arr, left, mid);
        count += mergeSortAndCount(arr, mid + 1, right);
        count += mergeAndCount(arr, left, mid, right);
    }
    return count;
}

int main() {
    vector<int> arr = {2, 4, 1, 3, 5};

    int inversionCount = mergeSortAndCount(arr, 0, arr.size() - 1);

    cout << "Number of inversions: " << inversionCount << endl;
    return 0;
}
