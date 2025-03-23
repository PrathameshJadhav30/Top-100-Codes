#include <iostream>

using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << "The character '" << ch << "' is an Alphabet." << endl;
    } 
    else {
        cout << "The character '" << ch << "' is not an Alphabet." << endl;
    }


    return 0;
}
