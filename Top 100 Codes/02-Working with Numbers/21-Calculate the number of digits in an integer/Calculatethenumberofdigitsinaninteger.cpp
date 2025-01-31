#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, digit = 0;
    
    // Taking user input
    cout << "Enter a number: ";
    cin >> num;

    // Handle zero separately
    if (num == 0) {
        digit = 1;
    } else {
        // Convert negative number to positive
        if (num < 0) num = -num;

        // Count digits
        while (num > 0) {
            digit++;
            num /= 10;
        }
    }

    // Display result
    cout << "Number of digits = " << digit << endl;

    return 0;
}
