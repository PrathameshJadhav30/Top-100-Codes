#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    return str == rev;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    
    if (isPalindrome(input)) {
        cout << "The given string is a palindrome." << endl;
    } else {
        cout << "The given string is not a palindrome." << endl;
    }
    
    return 0;
}
