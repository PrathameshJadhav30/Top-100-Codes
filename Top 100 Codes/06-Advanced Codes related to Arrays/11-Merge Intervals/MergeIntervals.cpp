#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Sort intervals based on starting time
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;

        for (auto& interval : intervals) {
            // If merged list is empty or no overlap, add interval
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval);
            } else {
                // Overlap detected; merge by updating the end time
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }

        return merged;
    }
};

// Example usage
int main() {
    Solution sol;
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> result = sol.merge(intervals);

    cout << "Merged Intervals: ";
    for (const auto& interval : result) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}
