#include <iostream>
#include <unordered_map>
using namespace std;

void findNonRepeatingCharacters(const string& str) {
    unordered_map<char, int> freq;

    // Count the frequency of each character 
    for (int i = 0; i < str.length(); i++) {
        freq[str[i]]++;
    }

    cout << "Non-repeating characters: ";
    bool found = false;
    for (int i = 0; i < str.length(); i++) {
        if (freq[str[i]] == 1) {
            cout << str[i] << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "None";
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    findNonRepeatingCharacters(input);

    return 0;
}
