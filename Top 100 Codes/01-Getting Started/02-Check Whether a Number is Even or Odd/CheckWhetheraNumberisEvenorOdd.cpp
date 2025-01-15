#include <iostream> // Include the input-output stream library

using namespace std; // Use the standard namespace to simplify syntax

int main() {
    int number; // Variable to store user input

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> number; // Take user input

    // Check if the number is divisible by 2 using the modulo operator
    // If the remainder when divided by 2 is 0, the number is even; otherwise, it is odd
    number % 2 == 0 ? cout << "Even" : cout << "Odd";

    return 0; // Indicate successful execution
}
