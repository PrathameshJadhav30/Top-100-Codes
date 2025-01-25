#include <iostream>
using namespace std;

// Function to calculate HCF using the Euclidean algorithm
// The algorithm works by repeatedly replacing the larger number 
// with the remainder of dividing the larger number by the smaller one.
int calculateHCF(int a, int b) {
    while (b != 0) { // Continue until the remainder becomes 0
        int remainder = a % b; // Calculate the remainder
        a = b; // Assign the smaller number to 'a'
        b = remainder; // Assign the remainder to 'b'
    }
    return a; // 'a' now contains the HCF
}

int main() {
    int num1, num2;

    // Prompt the user to enter two numbers
    cout << "Enter two numbers to find their HCF: ";
    cin >> num1 >> num2;

    // Call the calculateHCF function to compute the HCF
    int hcf = calculateHCF(num1, num2);

    // Output the result to the user
    cout << "The HCF of " << num1 << " and " << num2 << " is: " << hcf << endl;

    return 0; // Indicate that the program ended successfully
}