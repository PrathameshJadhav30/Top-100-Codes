#include <iostream>
using namespace std;

// Function to convert a decimal number to octal
void convertOctal(int num)
{
    // Variable to store the octal representation
    int octal = 0;
    int remainder, position = 1;

    // Loop until the decimal number becomes 0
    while (num != 0)
    {
        // Get the remainder when dividing by 8
        remainder = num % 8;

        // Divide the number by 8 to process the next digit
        num /= 8;

        // Add the remainder to the octal number at the current position
        octal += remainder * position;

        // Move to the next positional multiplier (units -> tens -> hundreds, etc.)
        position *= 10;
    }

    // Output the octal representation
    cout << "Octal representation: " << octal << endl;
}

int main()
{
    int decimal_num;

    // Prompt the user for input
    cout << "Enter a decimal number: ";
    cin >> decimal_num;

    // Function call to convert the decimal number to octal
    convertOctal(decimal_num);

    // Return 0 to indicate successful execution
    return 0;
}
