#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i;

    // Step 1: Find the first decreasing element from the end
    for (i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1])
            break;
    }

    if (i >= 0) {
        // Step 2: Find element just larger than nums[i]
        for (int j = n - 1; j > i; j--) {
            if (nums[j] > nums[i]) {
                swap(nums[i], nums[j]);
                break;
            }
        }
    }

    // Step 3: Reverse the elements from i+1 to end
    reverse(nums.begin() + i + 1, nums.end());
}

int main() {
    vector<int> nums = {1, 2, 3};
    nextPermutation(nums);

    for (int num : nums)
        cout << num << " ";
    return 0;
}
