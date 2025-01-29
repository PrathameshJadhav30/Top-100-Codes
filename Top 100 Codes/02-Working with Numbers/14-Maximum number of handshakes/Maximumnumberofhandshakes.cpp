#include <iostream>
using namespace std; 

int main() {
    // Declare a variable to store the number of people
    int num;

    // Take user input for the number of people
    cout << "Enter the number of people: ";
    cin >> num;

    // Ensure the number of people is non-negative
    if (num < 0) {
        cout << "Number of people cannot be negative." << endl;
        return 1; // Exit with an error code
    }

    // Calculate the total number of handshakes using the formula nC2 = n * (n - 1) / 2
    int total = num * (num - 1) / 2;

    // Display the result
    cout << "For " << num << " people, there will be " << total << " handshakes." << endl;

    return 0;
}
