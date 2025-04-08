#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, wordToReplace, newWord;

    // Input the original string
    cout << "Enter the original string: ";
    getline(cin, str);

    // Input the word to be replaced
    cout << "Enter the word to replace: ";
    cin >> wordToReplace;

    // Input the new word
    cout << "Enter the new word: ";
    cin >> newWord;

    // Find and replace
    size_t pos = str.find(wordToReplace);
    while (pos != string::npos) {
        // Replace the word
        str.replace(pos, wordToReplace.length(), newWord);
        // Continue searching from the next position
        pos = str.find(wordToReplace, pos + newWord.length());
    }

    // Output the modified string
    cout << "Modified string: " << str << endl;

    return 0;
}
