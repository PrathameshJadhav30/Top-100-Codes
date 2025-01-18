#include <iostream>
#include <cmath> // For sqrt function
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    // 0, 1, and negative numbers are not prime
    if (n <= 1)
        return false;

    // Special case: 2 is the only even prime number
    if (n == 2)
        return true;

    // Exclude even numbers greater than 2
    if (n % 2 == 0)
        return false;

    // Check divisors from 3 to sqrt(n), incrementing by 2 (only odd numbers)
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0)
            return false;
    }

    return true; // Return true if no divisors found
}

int main() {
    int lower, upper;

    // Prompt the user to input a range
    cout << "Enter the lower limit of the range: ";
    cin >> lower;
    cout << "Enter the upper limit of the range: ";
    cin >> upper;

    // Print all prime numbers in the given range
    cout << "Prime numbers between " << lower << " and " << upper << ": ";
    for (int i = lower; i <= upper; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
