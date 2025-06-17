#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int smallestSubarrayWithSum(vector<int>& arr, int x) {
    int n = arr.size();
    int minLen = INT_MAX;
    int start = 0, end = 0, currSum = 0;

    while (end < n) {
        // Expand window by including arr[end]
        currSum += arr[end];

        // Shrink window from the start as long as the sum is greater than x
        while (currSum > x) {
            minLen = min(minLen, end - start + 1);
            currSum -= arr[start];
            start++;
        }

        end++;
    }

    return (minLen == INT_MAX) ? 0 : minLen;
}

int main() {
    vector<int> arr = {1, 4, 45, 6, 0, 19};
    int x = 51;
    cout << "Smallest subarray length: " << smallestSubarrayWithSum(arr, x);
    return 0;
}
