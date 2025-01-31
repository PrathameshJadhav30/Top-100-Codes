#include <iostream>

using namespace std;

int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Check for leap year (February has 29 days in a leap year)
    if (month == 2 && (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))) {
        return 29;
    }

    return daysInMonth[month - 1];
}

int main() {
    int month, year;

    // Take user input
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    // Validate input
    if (month < 1 || month > 12 || year < 1) {
        cout << "Invalid input! Please enter a valid month (1-12) and year (>0)." << endl;
    } else {
        cout << "Number of days: " << getDaysInMonth(month, year) << endl;
    }

    return 0;
}
