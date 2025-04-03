#include <iostream>
#include <cctype>
using namespace std;

// Function to calculate sum of numbers in a string
int sumOfNumbersInString(string str) {
    int sum = 0, num = 0;

    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) {
            num = num * 10 + (str[i] - '0'); // Form the number
        } else {
            sum += num; // Add the formed number to sum
            num = 0;    // Reset for next number
        }
    }
    
    sum += num; // Add last number (if any)
    return sum;
}

// Driver code
int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    cout << "Sum of numbers in the string: " << sumOfNumbersInString(input) << endl;
    return 0;
}
