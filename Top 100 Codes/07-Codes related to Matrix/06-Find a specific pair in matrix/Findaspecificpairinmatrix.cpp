#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findMaxValue(vector<vector<int>>& mat) {
    int n = mat.size();
    vector<vector<int>> maxArr(n, vector<int>(n));

    // Last element is the same
    maxArr[n - 1][n - 1] = mat[n - 1][n - 1];

    // Fill last row
    for (int j = n - 2; j >= 0; j--)
        maxArr[n - 1][j] = max(mat[n - 1][j], maxArr[n - 1][j + 1]);

    // Fill last column
    for (int i = n - 2; i >= 0; i--)
        maxArr[i][n - 1] = max(mat[i][n - 1], maxArr[i + 1][n - 1]);

    int maxValue = INT_MIN;

    // Fill rest of maxArr
    for (int i = n - 2; i >= 0; i--) {
        for (int j = n - 2; j >= 0; j--) {
            // Update maxValue
            int potential = maxArr[i + 1][j + 1] - mat[i][j];
            if (potential > maxValue)
                maxValue = potential;

            // Update maxArr
            maxArr[i][j] = max(mat[i][j],
                               max(maxArr[i + 1][j],
                                   maxArr[i][j + 1]));
        }
    }

    return maxValue;
}

int main() {
    vector<vector<int>> mat = {
        { 1, 2, -1, -4, -20 },
        { -8, -3, 4, 2, 1 },
        { 3, 8, 6, 1, 3 },
        { -4, -1, 1, 7, -6 },
        { 0, -4, 10, -5, 1 }
    };

    cout << "Maximum Value = " << findMaxValue(mat) << endl;

    return 0;
}
