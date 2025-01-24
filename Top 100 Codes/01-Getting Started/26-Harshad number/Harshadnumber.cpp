#include <iostream>
using namespace std;

// Function to check if a number is a Harshad (Niven) number
int checkHarshad(int num) {
    int sum = 0;      // Variable to store the sum of digits
    int temp = num;   // Temporary variable to process the number

    // Calculate the sum of digits of the number
    while (temp != 0) {
        sum += temp % 10; // Add the last digit to sum
        temp /= 10;       // Remove the last digit
    }

    // Check if the number is divisible by the sum of its digits
    return num % sum == 0;
}

int main() {
    int n;

    // Take user input
    cout << "Enter a number to check if it is a Harshad number: ";
    cin >> n;

    // Check if the number is a Harshad number and display the result
    if (checkHarshad(n))
        cout << n << " is a Harshad number." << endl;
    else
        cout << n << " is not a Harshad number." << endl;

    return 0;
}

// Time complexity: O(d)
// Space complexity: O(1)
// Where d is the number of digits in the input number
