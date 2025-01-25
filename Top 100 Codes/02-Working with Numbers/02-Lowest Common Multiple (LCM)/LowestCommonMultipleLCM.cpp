#include <iostream>
using namespace std;

// Function to calculate LCM directly using the formula: LCM(a, b) = (a * b) / HCF(a, b)
int calculateLCM(int a, int b) {
    int greater = max(a, b);
    int lcm = greater;

    // Find the smallest multiple of the greater number that is divisible by the other number
    while (lcm % a != 0 || lcm % b != 0) {
        lcm += greater;
    }
    return lcm;
}

int main() {
    int num1, num2;

    // Prompt the user to enter two numbers
    cout << "Enter two numbers to find their LCM: ";
    cin >> num1 >> num2;

    // Call the calculateLCM function to compute the LCM
    int lcm = calculateLCM(num1, num2);

    // Output the result to the user
    cout << "The LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0; // Indicate that the program ended successfully
}