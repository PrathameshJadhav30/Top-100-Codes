#include <iostream>
#include <cmath> // For pow() function
using namespace std;

int main() {
    double base, exponent;

    // Prompt the user for input
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    // Calculate the power using pow function
    double result = pow(base, exponent);

    // Display the result
    cout << base << " raised to the power " << exponent << " is: " << result << endl;

    return 0;
}

// Key Notes:
// 1. This method handles all cases, including when base/exponent are integers/decimals, or positive/negative.
// 2. The pow() function is included in the <cmath> library.
// Time Complexity: O(1) - pow() is a constant-time operation for input size.
// Space Complexity: O(1) - Constant space is used.
