#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to find the largest sum contiguous subarray
int findLargestSumContiguousSubarray(vector<int>& nums) {
    int maxSoFar = INT_MIN;
    int maxEndingHere = 0;

    for (int i = 0; i < nums.size(); i++) {
        maxEndingHere += nums[i];

        if (maxSoFar < maxEndingHere)
            maxSoFar = maxEndingHere;

        if (maxEndingHere < 0)
            maxEndingHere = 0;
    }

    return maxSoFar;
}

int main() {
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};

    int maxSum = findLargestSumContiguousSubarray(arr);
    cout << "Maximum contiguous subarray sum is: " << maxSum << endl;

    return 0;
}
