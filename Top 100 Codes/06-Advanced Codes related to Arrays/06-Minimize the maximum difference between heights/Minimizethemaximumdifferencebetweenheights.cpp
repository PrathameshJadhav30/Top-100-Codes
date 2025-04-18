#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int getMinDiff(vector<int>& arr, int n, int k) {
    
    sort(arr.begin(), arr.end());

    
    int result = arr[n - 1] - arr[0];

    int smallest = arr[0] + k;
    int largest = arr[n - 1] - k;

    for (int i = 0; i < n - 1; i++) {
        int minElem = min(smallest, arr[i + 1] - k);
        int maxElem = max(largest, arr[i] + k);

        if (minElem < 0) {
            continue; 
        }

        result = min(result, maxElem - minElem);
    }

    return result;
}

int main() {
    vector<int> heights = {1, 15, 10};
    int k = 6;
    int n = heights.size();

    cout << "Minimum difference is: " << getMinDiff(heights, n, k) << endl;
    return 0;
}
