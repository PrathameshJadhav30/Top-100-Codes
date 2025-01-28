#include <iostream>
#include <cmath> // For pow function
using namespace std;

// Function to convert octal to binary
void convert(int octal) {
    int decimal = 0;
    int i = 0;

    // Step 1: Convert octal to decimal
    while (octal != 0) {
        int digit = octal % 10; // Extract the last digit
        decimal += digit * pow(8, i); // Add the digit multiplied by 8^i
        octal /= 10; // Remove the last digit
        i++; // Increment the power
    }

    // Display the intermediate decimal value
    cout << "Decimal Value: " << decimal << endl;

    long long binary = 0;
    int rem;
    i = 1; // Position multiplier for binary number

    // Step 2: Convert decimal to binary
    while (decimal != 0) {
        rem = decimal % 2; // Get the remainder (binary digit)
        decimal /= 2; // Divide by 2 for the next digit
        binary += rem * i; // Add the binary digit to the result
        i *= 10; // Move to the next binary position (units -> tens)
    }

    // Display the binary value
    cout << "Binary Value: " << binary << endl;
}

int main() {
    int octal;

    // Take user input for the octal number
    cout << "Enter an octal number: ";
    cin >> octal;

    // Call the convert function
    convert(octal);

    return 0; // Indicate successful execution
}
