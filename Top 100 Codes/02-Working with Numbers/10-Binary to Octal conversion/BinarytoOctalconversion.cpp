#include <iostream>
#include <cmath> // For pow function
#include <string> // For string manipulation
using namespace std;

// Function to convert a binary number to octal
void binaryToOctal(string binary)
{
    int decimal = 0, octal = 0, bitCount = 0;

    // Step 1: Convert binary to decimal
    int length = binary.length();
    for (int i = 0; i < length; i++)
    {
        // Extract each bit from the end of the string and calculate its decimal equivalent
        if (binary[length - i - 1] == '1')
        {
            decimal += pow(2, i);
        }
    }

    // Step 2: Convert decimal to octal
    int positionMultiplier = 1; // To track place values in octal
    for (; decimal > 0; decimal /= 8)
    {
        int remainder = decimal % 8; // Get the remainder
        octal += remainder * positionMultiplier; // Build octal number
        positionMultiplier *= 10; // Shift to the next place value
    }

    // Display the result
    cout << "Octal representation: " << octal << endl;
}

int main()
{
    string binary;

    // Prompt the user to enter a binary number
    cout << "Enter a binary number: ";
    cin >> binary;

    // Call the conversion function
    binaryToOctal(binary);

    return 0;
}
