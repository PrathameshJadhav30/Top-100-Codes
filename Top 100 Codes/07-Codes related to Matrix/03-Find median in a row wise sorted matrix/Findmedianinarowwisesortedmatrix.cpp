#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countSmallerEqual(const vector<int>& row, int mid) {
    return upper_bound(row.begin(), row.end(), mid) - row.begin();
}

int findMedian(vector<vector<int>>& matrix, int R, int C) {
    int minVal = matrix[0][0];
    int maxVal = matrix[0][C - 1];

    for (int i = 1; i < R; i++) {
        minVal = min(minVal, matrix[i][0]);
        maxVal = max(maxVal, matrix[i][C - 1]);
    }

    int desired = (R * C + 1) / 2;

    while (minVal < maxVal) {
        int mid = minVal + (maxVal - minVal) / 2;
        int count = 0;

        for (int i = 0; i < R; i++) {
            count += countSmallerEqual(matrix[i], mid);
        }

        if (count < desired)
            minVal = mid + 1;
        else
            maxVal = mid;
    }

    return minVal;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };

    int R = matrix.size(), C = matrix[0].size();
    cout << "Median is " << findMedian(matrix, R, C) << endl;

    return 0;
}
