#include <iostream>  // For input/output operations
using namespace std;

// Function to calculate the factorial of a given number using recursion
int getFactorial(int num) {
    if (num == 0) 
      return 1;  // Base case: factorial of 0 is 1
    
    return num * getFactorial(num - 1);  // Recursive call
}

int main() {
    int num;
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial of a negative number is undefined." << endl;
        return 0;
    }

    int fact = getFactorial(num);  // Calculate factorial
    cout << "Factorial of " << num << " is: " << fact << endl;

    return 0;
}
