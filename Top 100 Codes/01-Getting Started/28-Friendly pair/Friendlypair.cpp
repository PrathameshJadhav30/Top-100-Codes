#include <iostream>
using namespace std;

// Function to calculate the sum of proper divisors of a number
int getDivisorsSum(int num) {
    int sum = 0;

    // Iterate through all possible divisors (excluding the number itself)
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i; // Add the divisor to the sum
        }
    }

    return sum;
}

int main() {
    int num1, num2;

    // Take user input for the two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate the sum of proper divisors for both numbers
    int sum1 = getDivisorsSum(num1);
    int sum2 = getDivisorsSum(num2);

    // Check if the two numbers are friendly pairs
    if (static_cast<double>(sum1) / num1 == static_cast<double>(sum2) / num2) {
        cout << num1 << " and " << num2 << " are Friendly Pairs." << endl;
    } else {
        cout << num1 << " and " << num2 << " are not Friendly Pairs." << endl;
    }

    return 0;
}

// Time complexity: O(n1 + n2) 
// Space complexity: O(1)
// Where n1 and n2 are the two input numbers
