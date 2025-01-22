#include <iostream>
using namespace std;

// Function to calculate the factorial of a number using recursion
int factorial(int num) {
    if (num == 0 || num == 1) // Base case: 0! = 1! = 1
        return 1;
    return num * factorial(num - 1); // Recursive call
}

// Function to check if a number is a strong number
int isStrongNumber(int num) {
    int digit, sum = 0;
    int temp = num; // Store the original number for comparison

    // Calculate the sum of factorials of the digits
    while (temp != 0) {
        digit = temp % 10; // Extract the last digit
        sum += factorial(digit); // Add factorial of the digit to sum
        temp /= 10; // Remove the last digit
    }

    // Return true (1) if the sum equals the original number, otherwise false (0)
    return sum == num;
}

int main() {
    int num;

    // Take user input
    cout << "Enter a number to check if it's a Strong Number: ";
    cin >> num;

    // Check and display the result
    if (isStrongNumber(num))
        cout << num << " is a Strong Number." << endl;
    else
        cout << num << " is Not a Strong Number." << endl;

    return 0;
}
