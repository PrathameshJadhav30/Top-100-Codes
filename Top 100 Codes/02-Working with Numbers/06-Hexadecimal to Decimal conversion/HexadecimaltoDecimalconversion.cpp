// using built-in stoi() function
#include <iostream>
#include <string>
#include <exception> // For handling exceptions
using namespace std;

int main() {
    // Variable to store the hexadecimal number as a string
    string hexNumber;
    cout << "Enter a hexadecimal number: ";
    cin >> hexNumber;

    try {
        int base = 16; // Base 16 for hexadecimal numbers

        // Convert the hexadecimal string to decimal using stoi
        int decimalValue = stoi(hexNumber, 0, base);

        // Output the decimal equivalent of the hexadecimal number
        cout << "Decimal value: " << decimalValue << endl;
    } catch (const invalid_argument& e) {
        // Handle invalid input (non-hexadecimal characters)
        cout << "Error: Invalid hexadecimal number. Please enter valid digits (0-9, A-F, a-f)." << endl;
    } catch (const out_of_range& e) {
        // Handle cases where the number is too large to convert
        cout << "Error: The hexadecimal number is too large to convert." << endl;
    }

    return 0;
}
