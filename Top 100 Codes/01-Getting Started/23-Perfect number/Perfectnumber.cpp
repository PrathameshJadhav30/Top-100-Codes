#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int n, sum = 0;

    // Prompt the user to enter a number
    cout << "Enter a number to check if it is a perfect number: ";
    cin >> n;

    // Calculate the sum of divisors of the number (excluding itself)
    for (int i = 1; i < n; i++) {
        if (n % i == 0) { // Check if 'i' is a divisor of 'n'
            sum += i;    // Add the divisor to the sum
        }
    }

    // Check if the sum of divisors equals the number itself
    if (sum == n) {
        cout << n << " is a perfect number." << endl;
    } else {
        cout << n << " is not a perfect number." << endl;
    }

    // Time complexity: O(N) 
    // Space complexity: O(1)

    return 0;
}
