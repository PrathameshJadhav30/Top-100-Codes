#include <iostream>
using namespace std;

// Function to calculate the factorial of a given number recursively
int getFactorial(int num) {
    // Base case: factorial of 0 is 1
    if (num == 0)
        return 1;
    
    // Recursive call to calculate factorial
    return num * getFactorial(num - 1);
}

int main() {
    int num;

    // Prompt user for input
    cout << "Enter a number to find its factorial: ";
    cin >> num;

    // Validate input
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1; // Exit with an error code
    }

    // Calculate factorial
    int fact = getFactorial(num);

    // Display result
    cout << "Factorial of " << num << " is: " << fact << endl;

    return 0;
}

// Time Complexity: O(N) - Linear recursion for N calls
// Space Complexity: O(1) - No extra space used apart from recursion stack
// Auxiliary Space Complexity (Function call stack): O(N)
