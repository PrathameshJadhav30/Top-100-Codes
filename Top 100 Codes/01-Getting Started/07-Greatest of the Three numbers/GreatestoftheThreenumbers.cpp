#include <iostream>
using namespace std;

int main()
{
    // Declare variables to hold three numbers
    int first, second, third;

    // Prompt the user to input three numbers
    cout << "Enter the first number: ";
    cin >> first;

    cout << "Enter the second number: ";
    cin >> second;

    cout << "Enter the third number: ";
    cin >> third;

    // Compare first with other numbers
    if ((first >= second) && (first >= third))
    {
        cout << first << " is the greatest." << endl;
    }
    // Compare second with other numbers
    else if ((second >= first) && (second >= third))
    {
        cout << second << " is the greatest." << endl;
    }
    // If neither first nor second is the greatest, third must be
    else
    {
        cout << third << " is the greatest." << endl;
    }

    return 0; // Exit the program
}

/*
Time Complexity: O(1) - Comparisons are constant regardless of input size.
Space Complexity: O(1) - A fixed amount of memory is used for variables.
*/
