#include <bits/stdc++.h>
using namespace std;

string remVowel(string str) {
    regex r("[aeiouAEIOU]");
    return regex_replace(str, r, "");
}

// Driver Code
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    cout << "String after removing vowels: " << remVowel(str) << endl;
    return 0;
}
