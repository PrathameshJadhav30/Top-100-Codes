#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) 
        return false; // Handle cases for 0 and 1
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    
    // Taking user input
    cout << "Enter a number: ";
    cin >> n;

    // Checking and displaying result using if-else
    if (isPrime(n))
        cout << n << " is a Prime Number" << endl;
    else
        cout << n << " is Not a Prime Number" << endl;

    return 0;
}
