#include <bits/stdc++.h>
using namespace std;

// Function to check if a substring is a palindrome
bool isPalindrome(const string &str, int low, int high) {
    while (low < high) {
        if (str[low] != str[high]) 
            return false;
        low++;
        high--;
    }
    return true;
}

// Recursive function to find all palindromic partitions
void findAllPartitions(vector<vector<string>> &result, vector<string> &current, int start, int n, const string &str) {
    if (start >= n) {
        result.push_back(current);  // Store the current partition
        return;
    }

    for (int i = start; i < n; i++) {
        if (isPalindrome(str, start, i)) {
            current.push_back(str.substr(start, i - start + 1));  // Add palindrome substring
            findAllPartitions(result, current, i + 1, n, str);    // Recur for the remaining substring
            current.pop_back();  // Backtrack
        }
    }
}

// Main function to generate all palindromic partitions
void allPalPartitions(const string &str) {
    vector<vector<string>> result;
    vector<string> current;
    findAllPartitions(result, current, 0, str.length(), str);

    cout << "All possible palindromic partitions:\n";
    for (const auto &partition : result) {
        for (const string &s : partition) {
            cout << s << " ";
        }
        cout << "\n";
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    allPalPartitions(str);

    return 0;
}
