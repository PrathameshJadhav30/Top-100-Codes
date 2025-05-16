#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> findElements(int arr[], int n, int k) {
    unordered_map<int, int> freq;
    vector<int> result;

    // Count frequencies
    for (int i = 0; i < n; ++i) {
        freq[arr[i]]++;
    }

    // Find elements with count > n/k
    for (auto it : freq) {
        if (it.second > n / k) {
            result.push_back(it.first);
        }
    }

    return result;
}

int main() {
    int arr[] = {3, 1, 2, 2, 1, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    vector<int> result = findElements(arr, n, k);

    for (int x : result)
        cout << x << " ";  // Output: 3 2

    return 0;
}
