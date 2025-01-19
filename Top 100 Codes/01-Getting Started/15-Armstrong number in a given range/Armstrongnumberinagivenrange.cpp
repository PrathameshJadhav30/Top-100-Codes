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
        int rem = temp % 10;        // Extract the last digit
        sum += pow(rem, digits);    // Add the power of the digit to the sum
        temp /= 10;                 // Remove the last digit
    }

    // Check if the sum is equal to the original number
    return sum == originalNum;
}

int main() {
    int start, end;

    // Prompt the user for the range
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    // Validate the range
    if (start > end) {
        cout << "Invalid range! The start must be less than or equal to the end." << endl;
        return 1;
    }

    cout << "Armstrong numbers between " << start << " and " << end << " are:" << endl;

    // Loop through the range and check for Armstrong numbers
    bool found = false;
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
            found = true;
        }
    }

    // If no Armstrong numbers are found
    if (!found) {
        cout << "None" << endl;
    } else {
        cout << endl;
    }

    return 0;
}
