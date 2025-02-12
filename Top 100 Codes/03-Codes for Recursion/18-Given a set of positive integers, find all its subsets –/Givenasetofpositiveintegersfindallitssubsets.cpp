#include <iostream>
#include <vector>
using namespace std;

// Function to print a subset
void printSubset(const vector<int>& subset) {
    cout << "{ ";
    for (int num : subset) {
        cout << num << " ";
    }
    cout << "}" << endl;
}

// Recursive function to generate all subsets
void generateSubsets(vector<int>& set, vector<int>& current, int index) {
    if (index == set.size()) {
        printSubset(current);  // Print the current subset
        return;
    }

    // Exclude the current element and move to the next
    generateSubsets(set, current, index + 1);

    // Include the current element in the subset
    current.push_back(set[index]);
    generateSubsets(set, current, index + 1);

    // Backtrack by removing the last element
    current.pop_back();
}

int main() {
    vector<int> set = {1, 2, 3};  // Example set
    vector<int> current;          // Current subset
    cout << "All subsets:" << endl;
    generateSubsets(set, current, 0);
    return 0;
}
