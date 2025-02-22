#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProductSubarray(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) 
       return 0; // Edge case

    int maxProd = arr[0], minProd = arr[0], result = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < 0) 
            swap(maxProd, minProd); // Swap when encountering a negative number

        maxProd = max(arr[i], maxProd * arr[i]); // Max product ending at i
        minProd = min(arr[i], minProd * arr[i]); // Min product ending at i (handling negatives)

        result = max(result, maxProd); // Update the global max product
    }

    return result;
}

int main() {
    vector<int> arr = {2, 3, -2, 4, -1}; // Example array
    cout << "Maximum product of subarray: " << maxProductSubarray(arr) << endl;
    return 0;
}
