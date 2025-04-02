#include <iostream>
#include <string>

using namespace std;

string removeSpaces(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            result += str[i];
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string output = removeSpaces(input);
    cout << "String without spaces: " << output << endl;

    return 0;
}
