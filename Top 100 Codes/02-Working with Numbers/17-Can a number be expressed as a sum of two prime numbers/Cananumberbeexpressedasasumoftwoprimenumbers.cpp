#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) 
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to check if a number can be expressed as sum of two prime numbers
void checkSumOfTwoPrimes(int n) {
    bool found = false;
    for (int i = 2; i <= n / 2; i++) 
    {
        if (isPrime(i) && isPrime(n - i)) 
        {
            cout << n << " = " << i << " + " << (n - i) << endl;
            found = true;
        }
    }
    if (!found)
        cout << n << " cannot be expressed as the sum of two prime numbers." << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    checkSumOfTwoPrimes(num);
    return 0;
}
