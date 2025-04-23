#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int kadaneAlgorithm(const vector<int>& nums) {
    int maxSoFar = INT_MIN;
    int maxEndingHere = 0;

    for (int i = 0; i < nums.size(); i++) {
        maxEndingHere = max(nums[i], maxEndingHere + nums[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum subarray sum is " << kadaneAlgorithm(nums) << endl;
    return 0;
}
