// Algorithmic approach
#include <iostream>
#include <string>
#include <cmath> // For pow()
#include <cctype> // For toupper()
using namespace std;

// Function to convert a hexadecimal number to a decimal number
int hexToDecimal(const string& hexNumber) {
    int decimalValue = 0; // Initialize the result
    int length = hexNumber.size(); // Length of the hexadecimal number

    // Iterate over each character in the hexadecimal string
    for (int i = 0; i < length; i++) {
        char digit = toupper(hexNumber[i]); // Convert to uppercase for uniformity
        int value;

        // Check if the character is a valid hexadecimal digit
        if (digit >= '0' && digit <= '9') {
            value = digit - '0'; // Convert '0'-'9' to 0-9
        } else if (digit >= 'A' && digit <= 'F') {
            value = digit - 'A' + 10; // Convert 'A'-'F' to 10-15
        } else {
            // Invalid character for a hexadecimal number
            cout << "Error: Invalid hexadecimal number. Please use digits 0-9 and letters A-F." << endl;
            exit(0); // Terminate the program for invalid input
        }

        // Compute the decimal value using position-based power of 16
        decimalValue += value * pow(16, length - 1 - i);
    }

    return decimalValue;
}

int main() {
    string hexNumber; // Input hexadecimal number as a string
    cout << "Enter a hexadecimal number: ";
    cin >> hexNumber;

    // Call the conversion function and display the result
    cout << "Decimal value: " << hexToDecimal(hexNumber) << endl;

    return 0;
}
