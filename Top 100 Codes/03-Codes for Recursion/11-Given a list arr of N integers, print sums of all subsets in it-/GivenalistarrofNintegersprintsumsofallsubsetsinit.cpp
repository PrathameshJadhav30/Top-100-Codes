#include <iostream>
#include <vector>
using namespace std;

// Recursive function to calculate subset sums
void subsetSums(vector<int>& arr, int index, int currentSum) {
    if (index == arr.size()) {
        // Base case: print the current sum
        cout << currentSum << " ";
        return;
    }

    // Include the current element in the subset sum
    subsetSums(arr, index + 1, currentSum + arr[index]);

    // Exclude the current element from the subset sum
    subsetSums(arr, index + 1, currentSum);
}

int main() {
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;

    vector<int> arr(N);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << "Subset sums:\n";
    subsetSums(arr, 0, 0);  // Start recursion from index 0 with sum 0
    cout << endl;

    return 0;
}
