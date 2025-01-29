#include <iostream>
using namespace std;

// Function to find the Greatest Common Divisor (GCD) using the iterative approach
int findGCD(int a, int b) {
    int gcd;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    return gcd;
}

int main() {
    int num1, den1, num2, den2;

    // Taking user input for the first fraction
    cout << "Enter numerator and denominator of the first fraction: ";
    cin >> num1 >> den1;

    // Taking user input for the second fraction
    cout << "Enter numerator and denominator of the second fraction: ";
    cin >> num2 >> den2;

    // Finding the Least Common Multiple (LCM) of the denominators
    int lcm = (den1 * den2) / findGCD(den1, den2);

    // Computing the sum of fractions by making denominators equal
    int numeratorSum = (num1 * (lcm / den1)) + (num2 * (lcm / den2));

    // Simplifying the result
    int gcdResult = findGCD(numeratorSum, lcm);
    int simplifiedNumerator = numeratorSum / gcdResult;
    int simplifiedDenominator = lcm / gcdResult;

    // Displaying the result
    cout << num1 << "/" << den1 << " + " << num2 << "/" << den2
         << " = " << simplifiedNumerator << "/" << simplifiedDenominator << endl;

    return 0;
}
