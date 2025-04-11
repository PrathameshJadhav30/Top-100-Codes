#include <iostream>
#include <vector>
using namespace std;

bool isMatch(const string &wild, const string &str) {
    int m = wild.size();
    int n = str.size();

    // dp[i][j] => wild[0..i-1] matches str[0..j-1]
    vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));

    // Empty pattern matches empty string
    dp[0][0] = true;

    // Fill first column (string is empty)
    for (int i = 1; i <= m; i++) {
        if (wild[i - 1] == '*')
            dp[i][0] = dp[i - 1][0];
        else
            break;
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (wild[i - 1] == str[j - 1] || wild[i - 1] == '?') {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else if (wild[i - 1] == '*') {
                dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
            }
        }
    }

    return dp[m][n];
}

int main() {
    string pattern = "a*b?d";
    string text = "axybcd";

    if (isMatch(pattern, text))
        cout << "Matched " << endl;
    else
        cout << "Not Matched " << endl;

    return 0;
}
