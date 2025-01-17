#include <iostream>
using namespace std;

int main()
{
    // Declare variables to hold user input
    int num1, num2;

    // Prompt the user to input two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Compare the two numbers and display the result
    if (num1 == num2)
    {
        cout << "Both numbers are equal." << endl;
    }
    else if (num1 > num2)
    {
        cout << num1 << " is greater than " << num2 << "." << endl;
    }
    else
    {
        cout << num2 << " is greater than " << num1 << "." << endl;
    }

    return 0; // Exit the program
}

/*
Time Complexity: O(1) - The comparison and output operations take constant time.
Space Complexity: O(1) - The program uses a fixed amount of memory regardless of input size.
*/
