#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int findLongestConsecutiveSubsequence(vector<int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());
    int longestStreak = 0;

    for (int num : numSet) {
        // Check if it's the start of a sequence
        if (numSet.find(num - 1) == numSet.end()) {
            int currentNum = num;
            int currentStreak = 1;

            // Count up
            while (numSet.find(currentNum + 1) != numSet.end()) {
                currentNum++;
                currentStreak++;
            }

            longestStreak = max(longestStreak, currentStreak);
        }
    }
    return longestStreak;
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << "Longest Consecutive Subsequence Length: " << findLongestConsecutiveSubsequence(nums) << endl;
    return 0;
}
