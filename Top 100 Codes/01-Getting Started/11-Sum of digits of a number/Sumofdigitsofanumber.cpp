#include<iostream>
using namespace std;

// Function to calculate the sum of digits of a number using recursion
int getSum(int num) {
    // Base case: If the number becomes 0, return 0
    if (num == 0)
        return 0;
    // Recursive case: Add the last digit to the sum of the rest of the digits
    return (num % 10) + getSum(num / 10);
}

int main() {
    int num;

    // Prompt the user for input
    cout << "Enter a number: ";
    cin >> num;

    // Ensure the number is positive for simplicity
    if (num < 0) {
        cout << "Please enter a positive number." << endl;
        return 1;
    }

    // Calculate the sum of digits
    int sum = getSum(num);

    // Display the result
    cout << "The sum of the digits of " << num << " is: " << sum << endl;

    return 0;
}

// Time complexity: O(N), where N is the number of digits in the number
// Space complexity: O(N), due to the recursion call stack
