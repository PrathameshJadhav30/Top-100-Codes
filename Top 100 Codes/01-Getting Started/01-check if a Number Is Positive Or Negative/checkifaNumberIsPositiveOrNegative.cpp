#include <iostream> // Include the input-output stream library
using namespace std;

int main() {
    int num; // Variable to store the user input

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> num; // Take user input

    // Condition to check if the number is negative or positive
    if (num >= 0) {
        if (num == 0) {
            cout << "Zero"; // Output if the number is 0
        } else {
            cout << "The number is positive"; // Output if the number is positive
        }
    } else {
        cout << "The number is negative"; // Output if the number is negative
    }

    return 0; // Indicate successful execution
}
