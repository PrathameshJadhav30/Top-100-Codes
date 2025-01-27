#include <iostream>
#include <string>
using namespace std;

// Function to convert a decimal number to hexadecimal
string convertToHexadecimal(int decimal)
{
    string hexadecimal = ""; // String to store the hexadecimal result
    int remainder;

    // Characters for hexadecimal digits
    const char hexDigits[] = "0123456789ABCDEF";

    // Loop until the decimal number becomes 0
    while (decimal > 0)
    {
        // Get the remainder when dividing by 16
        remainder = decimal % 16;

        // Append the corresponding hexadecimal digit
        hexadecimal = hexDigits[remainder] + hexadecimal;

        // Divide the decimal number by 16 to process the next digit
        decimal /= 16;
    }

    // Return the hexadecimal representation
    return hexadecimal;
}

int main()
{
    int decimal_num;

    // Prompt the user for input
    cout << "Enter a decimal number: ";
    cin >> decimal_num;

     // Function call to convert the decimal number to hexadecimal
    string hexadecimal = convertToHexadecimal(decimal_num);

    // Display the result
    cout << "The hexadecimal representation of " << decimal_num << " is: " << (hexadecimal.empty() ? "0" : hexadecimal) << endl;

    return 0;
}
