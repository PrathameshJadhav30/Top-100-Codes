#include <iostream>
using namespace std;

// Function to check if a number is Automorphic
int isAutomorphic(int n) {
    int square = n * n; // Calculate the square of the number

    while (n != 0) {
        // Check the last digit of n and square
        if (n % 10 != square % 10) {
            return 0; // Not an Automorphic number
        }

        // Remove the last digit from both n and square
        n /= 10;
        square /= 10;
    }

    // If the loop completes, the number is Automorphic
    return 1;
}

int main() {
    int n;

    // Take user input for the number
    cout << "Enter a number: ";
    cin >> n;

    int square = n * n; // Calculate the square of the input number

    // Check if the number is Automorphic and print the result
    if (isAutomorphic(n)) {
        cout << "Num: " << n << ", Square: " << square << " - is Automorphic" << endl;
    } else {
        cout << "Num: " << n << ", Square: " << square << " - is not Automorphic" << endl;
    }

    return 0;
}
