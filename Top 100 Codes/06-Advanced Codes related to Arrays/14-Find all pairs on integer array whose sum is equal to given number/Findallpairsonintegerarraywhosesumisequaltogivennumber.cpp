#include <iostream>
#include <vector>
#include <map>
using namespace std;

// Function to find and print all pairs with a given sum
void findPairsWithSum(const vector<int>& arr, int targetSum) {
    map<int, int> numCount; // Map to store frequency of elements
    bool found = false;

    for (int i = 0; i < arr.size(); i++) {
        int current = arr[i];
        int complement = targetSum - current;

        // If complement exists in the map, print it
        if (numCount[complement] > 0) {
            cout << "Pair found: (" << complement << ", " << current << ")\n";
            found = true;
        }

        // Add current number to map
        numCount[current]++;
    }

    if (!found) {
        cout << "No pairs found with sum " << targetSum << ".\n";
    }
}

int main() {
    // Example usage
    vector<int> arr = {1, 5, 7, -1, 5};
    int targetSum = 6;

    cout << "Array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << "\nTarget Sum: " << targetSum << endl;

    findPairsWithSum(arr, targetSum);

    return 0;
}
