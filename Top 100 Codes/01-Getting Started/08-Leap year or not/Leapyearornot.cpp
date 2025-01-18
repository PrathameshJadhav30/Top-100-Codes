#include <bits/stdc++.h>
using namespace std;

int main() {
    // Variable to store the year
    int year;

    // Prompt the user to input a year
    cout << "Enter a year: ";
    cin >> year;

    // Check if the year is a leap year
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " is a Leap Year." << endl; // Leap year condition
    } else {
        cout << year << " is not a Leap Year." << endl; // Not a leap year
    }

    return 0;
}
