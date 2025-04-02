#include <bits/stdc++.h>
using namespace std;

void removeSpecialCharacter(string& s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] < 'A' || (s[i] > 'Z' && s[i] < 'a') || s[i] > 'z') {
            s.erase(i, 1);
            i--;
        }
    }
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    
    removeSpecialCharacter(s);
    cout << "String after removing non-alphabet characters: " << s << endl;
    
    return 0;
}
