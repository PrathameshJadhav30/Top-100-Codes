#include <iostream>
using namespace std;

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    // Base case: the first two numbers of the Fibonacci sequence are 0 and 1
    if (n <= 1)
        return n;

    // Recursive case: sum of the previous two Fibonacci numbers
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n; // Number of Fibonacci terms to display

    // Prompt the user for input
    cout << "Enter the number of Fibonacci terms to display: ";
    cin >> n;

    // Validate the input
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit the program
    }

    // Loop through the first `n` Fibonacci numbers and print them
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i);
        // Add a comma after each number except the last
        if (i < n - 1) {
            cout << ", ";
        }
    }

    return 0;
}
