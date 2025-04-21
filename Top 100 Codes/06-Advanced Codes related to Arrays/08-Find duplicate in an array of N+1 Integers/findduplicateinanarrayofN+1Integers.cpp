#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(const vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];

    // Phase 1: Detect cycle
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Phase 2: Find entrance to the cycle (duplicate)
    fast = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};  // Example input with duplicate 2
    int duplicate = findDuplicate(nums);
    cout << "Duplicate number is: " << duplicate << endl;
    return 0;
}
