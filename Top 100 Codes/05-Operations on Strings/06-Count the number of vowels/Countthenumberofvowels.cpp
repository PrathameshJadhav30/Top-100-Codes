// Write a C++ program to read a string and find the number of vowels in it
#include <iostream>

using namespace std;

// Function to check if a character is a vowel
bool isVowel(char ch) {
    ch = tolower(ch);  // Convert to lowercase for case insensitivity
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// Function to count the number of vowels in a string
int countVowels(const string& str) {
    int vowelCount = 0;
    
    // Using a normal for loop
    for (int i = 0; i < str.length(); i++) {
        if (isVowel(str[i])) {
            vowelCount++;
        }
    }
    
    return vowelCount;
}

int main() {
    string input;
    
    // Taking user input
    cout << "Enter a string: ";
    getline(cin, input);

    // Counting vowels
    int vowelCount = countVowels(input);

    // Displaying the result
    cout << "Number of vowels in the string: " << vowelCount << endl;

    return 0;
}
