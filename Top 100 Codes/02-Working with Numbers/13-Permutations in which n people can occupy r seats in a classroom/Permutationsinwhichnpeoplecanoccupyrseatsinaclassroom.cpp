// Problem Statement :
// In a classroom some of the seats are already occupied by students and only a few seats are available in the classroom. The available seats are assumed as r and n number of students are looking for the seat. We need to find in how many different permutations n number of students can sit on r number of chairs.
#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int factorial(int num) {
    int fact = 1;
    for (int i = num; i >= 1; i--) {
        fact *= i; // Multiply the current value with the factorial
    }
    return fact; // Return the computed factorial
}

int main() {
    int n, r;

    // Prompt the user for the number of people
    cout << "Enter the number of people (n): ";
    cin >> n;

    // Prompt the user for the number of seats
    cout << "Enter the number of seats (r): ";
    cin >> r;

    // Check if the inputs are valid (n >= r)
    if (n < r) {
        cout << "Error: Number of people (n) must be greater than or equal to the number of seats (r)." << endl;
        return 1; // Exit the program with an error code
    }

    // Calculate the total number of arrangements using the permutation formula
    // P(n, r) = n! / (n - r)!
    int permutations = factorial(n) / factorial(n - r);

    // Display the result
    cout << "Total possible arrangements: " << permutations << endl;

    return 0; // Indicate successful execution
}
