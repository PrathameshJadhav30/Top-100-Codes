#include <iostream>
#include <vector>
using namespace std;

// Multiply the number with the current factorial stored in result[]
void multiply(int x, vector<int> &result) {
    int carry = 0;

    for (int i = 0; i < result.size(); i++) {
        int product = result[i] * x + carry;
        result[i] = product % 10;       // Store last digit
        carry = product / 10;           // Carry forward
    }

    // Handle remaining carry
    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
}

// Function to find factorial of a large number
void factorial(int n) {
    vector<int> result;
    result.push_back(1); // Initialize with 1

    for (int i = 2; i <= n; i++) {
        multiply(i, result);
    }

    // Print the result in reverse
    cout << "Factorial of " << n << " is:\n";
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << endl;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    factorial(number);

    return 0;
}
