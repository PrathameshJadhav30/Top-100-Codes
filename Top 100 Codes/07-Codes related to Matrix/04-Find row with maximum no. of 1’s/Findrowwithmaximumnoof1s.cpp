#include <iostream>
#include <vector>
using namespace std;

// Function to find the row with the maximum number of 1s
int rowWithMax1s(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();

    int maxRowIndex = -1;
    int j = m - 1; // Start from top-right

    for (int i = 0; i < n; i++) {
        while (j >= 0 && mat[i][j] == 1) {
            j--;
            maxRowIndex = i;
        }
    }

    return maxRowIndex;
}

int main() {
    vector<vector<int>> mat = {
        {0, 0, 0, 1},
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {0, 0, 0, 0}
    };

    int index = rowWithMax1s(mat);
    if (index != -1)
        cout << "Row with maximum 1s is: " << index << endl;
    else
        cout << "No 1s in the matrix" << endl;

    return 0;
}
