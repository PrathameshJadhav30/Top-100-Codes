#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Take user input
    cout << "Enter a number to check if it is an Abundant Number: ";
    cin >> n;

    // Calculate the sum of proper divisors of the number
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i; // Add the divisor to the sum
        }
    }

    // Check if the number is abundant
    if (sum > n) {
        cout << n << " is an Abundant Number.\n";
        cout << "The Abundance is: " << (sum - n) << endl;
    } else {
        cout << n << " is not an Abundant Number.\n";
    }

    return 0;
}

// Time complexity: O(n)
// Space complexity: O(1)
