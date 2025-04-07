#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, toReplace, replaceWith;

    // Take user input
    cout << "Enter the original string: ";
    getline(cin, str);

    cout << "Enter the substring to replace: ";
    getline(cin, toReplace);

    cout << "Enter the replacement substring: ";
    getline(cin, replaceWith);

    // Find the starting index of the substring
    size_t pos = str.find(toReplace);

    // If found, replace the first occurrence
    if (pos != string::npos) {
        str.replace(pos, toReplace.length(), replaceWith);
    } else {
        cout << "Substring not found." << endl;
    }

    cout << "Updated string: " << str << endl;

    return 0;
}
