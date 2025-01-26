//using built-in stoi() function
#include <iostream>
#include <string>
#include <exception>
using namespace std;

int main()
{
    string binaryNumber;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    try {
        // Convert the binary string to a decimal number
        int decimalValue = stoi(binaryNumber, 0, 2);
        cout << "Decimal value: " << decimalValue << endl;
    } catch (const invalid_argument &e) {
        cout << "Error: Invalid binary number. Please enter only 0s and 1s." << endl;
    } catch (const out_of_range &e) {
        cout << "Error: The binary number is too large to convert." << endl;
    }

    return 0;
}
