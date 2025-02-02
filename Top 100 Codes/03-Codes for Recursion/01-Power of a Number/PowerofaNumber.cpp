#include <bits/stdc++.h>
using namespace std;

// Recursive function to calculate power
int power(int base, int exponent) {
    if (exponent == 0) // Base condition
        return 1;
    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;
    
    // Taking user input
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    // Display result
    cout << "Required Power is " << power(base, exponent) << endl;
}
