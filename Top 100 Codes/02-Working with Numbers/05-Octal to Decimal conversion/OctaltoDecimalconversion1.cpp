#include <iostream>
#include <cmath> // For pow() function
using namespace std;

// Function to convert octal to decimal
int octalToDecimal(long long octalNumber) {
    int decimalValue = 0; // Initialize decimal result
    int position = 0;     // Track the position of each digit (power of 8)

    // Process each digit in the octal number
    while (octalNumber != 0) {
        int digit = octalNumber % 10; // Extract the last digit

        // Validate that the digit is valid for an octal number (0-7)
        if (digit < 0 || digit > 7) {
            cout << "Error: Invalid octal number. Digits must be between 0 and 7." << endl;
            exit(0); // Terminate the program for invalid input
        }

        // Add the contribution of the current digit to the decimal value
        decimalValue += digit * pow(8, position);

        octalNumber /= 10; // Remove the last digit
        position++;        // Move to the next position (higher power of 8)
    }

    return decimalValue;
}

int main() {
    long long octalNumber; // Use long long to handle large octal numbers
    cout << "Enter an octal number: ";
    cin >> octalNumber;

    // Call the conversion function and display the result
    cout << "Decimal value: " << octalToDecimal(octalNumber) << endl;

    return 0;
}
