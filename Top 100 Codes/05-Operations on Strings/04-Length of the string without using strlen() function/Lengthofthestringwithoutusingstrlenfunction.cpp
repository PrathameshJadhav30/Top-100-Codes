#include <iostream>
using namespace std;

int stringLength(const char* str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Length of the string: " << stringLength(str.c_str()) << endl;
    return 0;
}
