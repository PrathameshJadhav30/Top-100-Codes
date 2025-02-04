#include <iostream>
#include <string>
using namespace std;

void permute(string s, int l, int r) {
    if (l == r) {
        cout << s << endl;
        return;
    }
    
    for (int i = l; i <= r; i++) {
        swap(s[l], s[i]);  // Swap characters
        permute(s, l + 1, r);  // Recurse for the next character
        swap(s[l], s[i]);  // Backtrack to the original string
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    cout << "All permutations of the string:\n";
    permute(str, 0, str.size() - 1);
    
    return 0;
}
