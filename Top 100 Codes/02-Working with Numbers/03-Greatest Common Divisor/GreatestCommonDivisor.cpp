#include <iostream>
using namespace std;

// Function to calculate the Greatest Common Divisor (GCD) of two integers
int gcd(int a, int b) {
    // Continue the loop until one of the numbers becomes zero
    while (b != 0) {
        int remainder = a % b; // Find the remainder when 'a' is divided by 'b'
        a = b;                // Assign the value of 'b' to 'a'
        b = remainder;        // Assign the remainder to 'b'
    }
    return a; // 'a' contains the GCD when 'b' becomes zero
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Output the GCD of the two numbers
    cout << "The GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;

    return 0;
}
