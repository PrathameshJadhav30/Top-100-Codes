#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

// Function to find the longest palindrome in an array
int findLongestPalindrome(vector<int>& arr) {
    int longest = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (isPalindrome(arr[i])) {
            longest = max(longest, arr[i]);
        }
    }
    return longest;
}

int main() {
    vector<int> arr = {121, 232, 4554, 12321, 67876, 9876};
    int longestPalindrome = findLongestPalindrome(arr);
    
    if (longestPalindrome != -1)
        cout << "The longest palindrome in the array is: " << longestPalindrome << endl;
    else
        cout << "No palindrome found in the array." << endl;
    
    return 0;
}
