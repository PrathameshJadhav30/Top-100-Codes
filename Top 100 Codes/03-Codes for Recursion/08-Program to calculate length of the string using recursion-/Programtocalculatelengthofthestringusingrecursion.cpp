#include <iostream>
using namespace std;

int stringLength(const char* str) {
    if (*str == '\0') 
        return 0;  
    return 1 + stringLength(str + 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    cout << "Length of the string: " << stringLength(str.c_str()) << endl;
    return 0;
}
