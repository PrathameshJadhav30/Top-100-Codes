#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

// Function to sort arr1 according to the order of arr2
void relativeSort(int arr1[], int n, int arr2[], int m) {
    unordered_map<int, int> freqMap;  // Store frequencies of arr1 elements
    vector<int> remainingElements;    // Store elements not in arr2

    // Count frequencies of elements in arr1
    for (int i = 0; i < n; i++) {
        freqMap[arr1[i]]++;
    }

    // Sorting arr1 according to arr2 order
    int index = 0;
    for (int i = 0; i < m; i++) {
        if (freqMap.find(arr2[i]) != freqMap.end()) {
            while (freqMap[arr2[i]] > 0) {
                arr1[index++] = arr2[i];
                freqMap[arr2[i]]--;
            }
            freqMap.erase(arr2[i]);  // Remove processed element
        }
    }

    // Collect remaining elements that were not in arr2
    for (auto &pair : freqMap) {
        while (pair.second > 0) {
            remainingElements.push_back(pair.first);
            pair.second--;
        }
    }

    // Sort the remaining elements in ascending order
    sort(remainingElements.begin(), remainingElements.end());

    // Place sorted remaining elements in arr1
    for (int num : remainingElements) {
        arr1[index++] = num;
    }
}

int main() {
    int arr1[] = {5, 3, 1, 2, 2, 4, 3, 6, 7, 9};
    int arr2[] = {3, 1, 4, 2};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    relativeSort(arr1, n, arr2, m);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}
