#include <iostream>
using namespace std;

// Function to print the reverse of a number using recursion
void getReverse(int num) {
    if (num == 0)
        return;

    // Extract the last digit
    int rem = num % 10;

    // Print the last digit
    cout << rem;

    // Recursively process the remaining digits
    getReverse(num / 10);
}

int main() {
    int num;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Ensure the number is positive for simplicity
    if (num < 0) {
        cout << "Please enter a positive number." << endl;
        return 1;
    }

    // Display the reverse of the number
    cout << "The reverse of " << num << " is: ";
    getReverse(num);
    cout << endl;

    return 0;
}

// Time complexity: O(N), where N is the number of digits in the number
// Space complexity: O(1) (excluding function call stack)
// Auxiliary space complexity: O(N), due to the recursion call stack
