#include <iostream>
using namespace std;

int main() {
    int num;

    // Prompt user to enter a number
    cout << "Enter a number to find its factors: ";
    cin >> num;

    // Check if the number is positive
    if (num <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }

    // Display the factors of the number
    cout << "Factors of " << num << " are: ";
    for (int i = 1; i <= num; i++) {
        // Check if 'i' is a factor of 'num'
        if (num % i == 0)
            cout << i << " ";
    }
    cout << endl;

    return 0;
}

// Time Complexity: O(N) - Iterates from 1 to num
// Space Complexity: O(1) - No extra space is used
