// using built-in stoi() function
#include <iostream>
#include <string>
#include <exception> // For handling exceptions
using namespace std;

int main()
{
    // Variable to store the octal number as a string
    string octalNumber;
    cout << "Enter an octal number: ";
    cin >> octalNumber;

    try {
        int base = 8; // Base 8 for octal numbers

        // Convert the octal number (string) to decimal using stoi
        int decimalValue = stoi(octalNumber, 0, base);

        // Output the converted decimal value
        cout << "Decimal value: " << decimalValue << endl;
    } catch (const invalid_argument& e) {
        // Exception thrown if the input contains invalid characters
        cout << "Error: Invalid octal number. Please enter digits from 0 to 7 only." << endl;
    } 

    return 0;
}
