#include <iostream>
using namespace std;

// Function to check if the character is a vowel or consonant
void checkCharacter(char ch) {
    // Convert the character to lowercase for uniform comparison
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << ch << " is a vowel." << endl;
    } 
    else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a consonant." << endl;
    } 
    else {
        cout << "Invalid input. Please enter an alphabetic character." << endl;
    }
}

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Call function to check character type
    checkCharacter(ch);

    return 0;
}
