#include <iostream>
using namespace std;

/**
 * @brief Recursive function to find the HCF (GCD) of two numbers.
 * 
 * @param a First number
 * @param b Second number
 * @return int The highest common factor (HCF) of a and b
 */
int hcf(int a, int b) {
    // Base case: If one number becomes 0, return the other number
    if (b == 0)
        return a;

    // Recursive case: HCF(a, b) = HCF(b, a % b) (Euclidean Algorithm)
    return hcf(b, a % b);
}

int main() {
    int num1, num2;

    // Taking input from the user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Finding and printing the HCF
    cout << "HCF of " << num1 << " and " << num2 << " is " << hcf(num1, num2) << endl;

    return 0;
}
