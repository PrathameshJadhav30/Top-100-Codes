#include <iostream>
#include <cstring> // For strlen()
using namespace std;

// Function to count possible decodings of a given digit sequence
int countDecodings(char *digits, int length) {
    // If the input sequence starts with '0', it can't be decoded
    if (length == 0 || digits[0] == '0')
        return 0;

    // Array to store the count of decodings up to each position
    int count[length + 1];
    count[0] = 1; // Empty string has one way to decode (do nothing)
    count[1] = 1; // Single non-zero digit has one way to decode

    for (int i = 2; i <= length; i++) {
        count[i] = 0; // Initialize the current count to zero

        // If the last digit is not '0', it contributes to decoding
        if (digits[i - 1] > '0')
            count[i] = count[i - 1];

        // If the last two digits form a valid number (10-26), include those
        if (digits[i - 2] == '1' || (digits[i - 2] == '2' && digits[i - 1] < '7'))
            count[i] += count[i - 2];
    }
    return count[length];
}

int main() {
    char digits[15];

    // Take input from the user
    cout << "Enter the sequence: ";
    cin >> digits;

    int length = strlen(digits);

    // Display the result
    cout << "Possible count of decodings: " << countDecodings(digits, length);

    return 0;
}
