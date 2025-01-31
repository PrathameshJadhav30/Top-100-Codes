#include <iostream>
using namespace std;

int main() {
    // Display prime numbers between 1 and 100
    cout << "Prime numbers between 1 and 100 are: ";

    for (int num = 1; num <= 100; num++) {
        if (num <= 1) continue; // Skip numbers less than or equal to 1
        
        bool isPrime = true;

        // Check divisibility from 2 to sqrt(num)
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
