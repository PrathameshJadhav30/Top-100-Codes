#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// Function to find common elements in all rows
void printCommonElements(vector<vector<int>>& mat) {
    int rows = mat.size();
    int cols = mat[0].size();
    unordered_map<int, int> mp;

    // Store first row elements in the map with count 1
    for (int j = 0; j < cols; j++) {
        mp[mat[0][j]] = 1;
    }

    // Traverse the matrix row by row starting from the second row
    for (int i = 1; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // If element is present in map and not repeated for current row
            if (mp[mat[i][j]] == i) {
                mp[mat[i][j]] = i + 1;
            }
        }
    }

    // Print elements which are common to all rows
    cout << "Common elements in all rows: ";
    for (auto& it : mp) {
        if (it.second == rows) {
            cout << it.first << " ";
        }
    }
    cout << endl;
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 1, 4, 8},
        {3, 7, 8, 5, 1},
        {8, 7, 7, 3, 1},
        {8, 1, 2, 7, 9}
    };

    printCommonElements(mat);

    return 0;
}
