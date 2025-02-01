#include <iostream>
using namespace std;

int main() {
    long long number;
    int digit;
    
    // Input the number and the digit to be counted
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the digit to count: ";
    cin >> digit;
    
    int count = 0;
    
    // Process each digit of the number
    while (number != 0) {
        int remainder = number % 10;  // get the last digit
        
        if (remainder == digit) {
            count++;  // increment count if the digit matches
        }
        
        number /= 10;  // remove the last digit
    }
    
    cout << "The digit " << digit << " occurs " << count << " time(s) in the number." << endl;
    
    return 0;
}
