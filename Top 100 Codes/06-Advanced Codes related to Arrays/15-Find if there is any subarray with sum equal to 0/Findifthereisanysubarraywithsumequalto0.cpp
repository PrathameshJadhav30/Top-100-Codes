#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool hasZeroSumSubarray(const vector<int>& nums) {
    unordered_set<int> sumSet; // To store cumulative sums
    int sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        // If sum is 0 or already exists in the set, a zero-sum subarray exists
        if (sum == 0 || sumSet.find(sum) != sumSet.end()) {
            return true;
        }

        // Insert the current sum into the set
        sumSet.insert(sum);
    }

    return false; // No subarray with sum 0 found
}

int main() {
    vector<int> arr = {4, 2, -3, 1, 6};

    if (hasZeroSumSubarray(arr)) {
        cout << "Yes, there is a subarray with sum 0.\n";
    } else {
        cout << "No, there is no subarray with sum 0.\n";
    }

    return 0;
}
