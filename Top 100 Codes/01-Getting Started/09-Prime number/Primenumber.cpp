#include <iostream>
using namespace std;

int main() {
    // Variable to store the number
    int num;

    // Prompt the user to input a number
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is prime
    if (num <= 1) {
        cout << num << " is not a Prime Number." << endl;
    } else {
        bool isPrime = true;

        // Check divisors from 2 to sqrt(num)
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        // Output the result
        if (isPrime) {
            cout << num << " is a Prime Number." << endl;
        } else {
            cout << num << " is not a Prime Number." << endl;
        }
    }

    return 0;
}
