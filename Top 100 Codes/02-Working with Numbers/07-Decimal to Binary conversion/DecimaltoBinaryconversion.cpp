#include <iostream>
using namespace std;

// Function to convert a decimal number to binary
void convertBinary(int num)
{
    // Variable to store the binary representation as a number
    long long binary = 0;
    int remainder, position = 1;

    // Loop until the decimal number becomes 0
    while (num != 0)
    {
        // Get the remainder when dividing by 2 (either 0 or 1)
        remainder = num % 2;

        // Divide the number by 2 to process the next bit
        num /= 2;

        // Add the remainder to the binary number at the current position
        binary += remainder * position;

        // Move to the next binary digit position (units -> tens -> hundreds, etc.)
        position *= 10;
    }

    // Output the binary representation
    cout << "Binary representation: " << binary << endl;
}

int main()
{
    int decimal_num;

    // Prompt the user for input
    cout << "Enter a decimal number: ";
    cin >> decimal_num;

    // Function call to convert the decimal number to binary
    convertBinary(decimal_num);

    // Return 0 to indicate successful execution
    return 0;
}
