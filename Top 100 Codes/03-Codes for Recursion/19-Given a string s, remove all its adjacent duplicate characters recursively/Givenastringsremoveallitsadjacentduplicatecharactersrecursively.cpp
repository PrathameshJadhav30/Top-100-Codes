#include <iostream>
#include <string>
using namespace std;

// Function to recursively remove adjacent duplicates
string removeAdjacentDuplicates(string s) {
    int n = s.length();
    if (n < 2) return s;

    string result = "";
    int i = 0;

    while (i < n) {
        // Check for adjacent duplicates
        if (i < n - 1 && s[i] == s[i + 1]) {
            // Skip all adjacent duplicates
            while (i < n - 1 && s[i] == s[i + 1]) {
                i++;
            }
        } else {
            // Add non-duplicate character to result
            result += s[i];
        }
        i++;
    }

    // If no change is made, return the result
    if (result.length() == s.length()) {
        return result;
    }

    // Recursively call for further reduction
    return removeAdjacentDuplicates(result);
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    string result = removeAdjacentDuplicates(s);
    cout << "Result after removing adjacent duplicates: " << result << endl;
    return 0;
}
