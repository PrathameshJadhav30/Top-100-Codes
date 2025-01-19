#include <iostream>
using namespace std;

// Recursive function to find the reverse of a number
int getReverse(int num, int rev) {
    if (num == 0)
        return rev;

    // Extract the last digit and update the reverse
    int rem = num % 10;
    rev = rev * 10 + rem;

    // Recursive call with the remaining digits
    return getReverse(num / 10, rev);
}

int main() {
    int num;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Calculate the reverse of the number
    int reverse = getReverse(num, 0);

    // Display the original number and its reverse
    cout << "The number is: " << num << endl;
    cout << "The reverse of the number is: " << reverse << endl;

    // Check if the number is a palindrome
    if (reverse == num)
        cout << num << " is a Palindrome." << endl;
    else
        cout << num << " is not a Palindrome." << endl;

    return 0;
}
