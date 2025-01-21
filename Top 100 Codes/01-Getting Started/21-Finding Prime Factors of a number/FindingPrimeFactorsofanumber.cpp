#include <iostream>
#include <cmath>
using namespace std;

// Function to print all prime factors of a given number
void primeFactors(int n) {
    // Handle the number of 2s that divide n
    while (n % 2 == 0) {
        cout << 2 << " ";
        n /= 2;
    }

    // Handle odd factors from 3 to sqrt(n)
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2)
        cout << n << " ";
}

int main() {
    int n;

    // Prompt user for input
    cout << "Enter a number to find its prime factors: ";
    cin >> n;

    // Validate input to ensure it's positive
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }

    // Print the prime factors of the number
    cout << "Prime factors of " << n << " are: ";
    primeFactors(n);
    cout << endl;

    return 0;
}

// Time Complexity: O(sqrt(N)) - Iterates up to sqrt(n) for finding factors
// Space Complexity: O(1) - Constant space is used
