#include <iostream>
using namespace std;

// Function to find the last non-zero digit of factorial
int lastNonZeroDigit(int n) {
    int result = 1;
    
    for (int i = 1; i <= n; i++) {
        result *= i;

        // Remove trailing zeros by dividing by 10
        while (result % 10 == 0) {
            result /= 10;
        }

        // Keep only the last 5 digits to prevent overflow
        result %= 100000;
    }

    // Return the last non-zero digit
    return result % 10;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int lastDigit = lastNonZeroDigit(n);
    cout << "The last non-zero digit in " << n << "! is: " << lastDigit << endl;

    return 0;
}
