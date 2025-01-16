#include <iostream> // For input and output operations
using namespace std;

// Function to calculate the sum of numbers from 'a' to 'b' using recursion
int calcSum(int a, int b) {
    // Base case: Stop recursion when 'a' exceeds 'b'
    if (a > b)
        return 0;
    // Recursive case: Add 'a' to the sum of numbers from (a + 1) to 'b'
    return a + calcSum(a + 1, b);
}

int main() {
    int a, b;

    // Taking input from the user for the range
    cout << "Enter the starting number (a): ";
    cin >> a;

    cout << "Enter the ending number (b): ";
    cin >> b;

    // Ensure 'a' is less than or equal to 'b'
    if (a > b) {
        cout << "Invalid input. Starting number must be less than or equal to the ending number." << endl;
        return 1;
    }

    // Calculate the sum from 'a' to 'b' using the recursive function
    int sum = calcSum(a, b);

    // Output the result
    cout << "The sum of numbers from " << a << " to " << b << " is: " << sum << endl;

    return 0;
}

// Time Complexity: O(N), where N is the range between 'a' and 'b' (inclusive)
// Space Complexity: O(N) due to the recursive function call stack
