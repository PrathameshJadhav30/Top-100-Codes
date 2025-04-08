#include <iostream>
#include <vector>
#include <string>
using namespace std;

int longestCommonSubsequence(string A, string B) {
    int m = A.length();
    int n = B.length();

    // Create DP table
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Fill the table
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (A[i - 1] == B[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];  // Match found
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);  // Skip one character
            }
        }
    }

    return dp[m][n];  // LCS length
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    int lcsLength = longestCommonSubsequence(str1, str2);
    cout << "Length of Longest Common Subsequence: " << lcsLength << endl;

    return 0;
}
