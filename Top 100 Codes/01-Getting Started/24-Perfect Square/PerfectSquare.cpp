#include <iostream>
#include <cmath> // For sqrt and ceil/floor functions
using namespace std;

// Function to check if the number is a perfect square
void checkPerfectSquare(int n)
{
    // Calculate the square root of the number
    // If the ceiling and floor of the square root are equal, it means the number is a perfect square
    if (ceil(sqrt(n)) == floor(sqrt(n))) {
        cout << "True"; // The number is a perfect square
    }
    else {
        cout << "False"; // The number is not a perfect square
    }
}

int main()
{
    int n;

    // Take user input for the number
    cout << "Enter a number: ";
    cin >> n;

    // Check if the entered number is a perfect square
    checkPerfectSquare(n);

    return 0;
}
