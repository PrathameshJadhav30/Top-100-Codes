#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    int originalNum = num; // Store the original number
    int sum = 0;
    int digits = 0;

    // Calculate the number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Calculate the sum of each digit raised to the power of the number of digits
    temp = num;
    while (temp != 0) {
        int rem = temp % 10;         // Extract the last digit
        sum += pow(rem, digits);    // Add the power of the digit to the sum
        temp /= 10;                 // Remove the last digit
    }

    // Check if the sum is equal to the original number
    return sum == originalNum;
}

int main() {
    int num;

    // Prompt the user for input
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is an Armstrong number and display the result
    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
