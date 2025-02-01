#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, x;
    
    // Take user input for n and x
    cout << "Enter the upper bound (n): ";
    cin >> n;
    cout << "Enter the number of divisors (x): ";
    cin >> x;
    
    // Variable to count the numbers with exactly x divisors
    int count = 0;
    
    // Loop over each number from 1 to n
    for (int i = 1; i <= n; i++){
        // Variable to count the factors of the current number i
        int count_factors = 0;
        
        // Loop from 1 to the square root of i to check for factors
        for (int j = 1; j <= sqrt(i); j++){
            if (i % j == 0){  // j is a divisor of i
                // If j is not the square root of i, then there are two divisors: j and i/j
                if (i / j != j)
                    count_factors += 2;
                else  // When j is the square root, count only once
                    count_factors++;
            }
        }
        
        // If the current number has exactly x divisors, increment our count
        if (count_factors == x)
            count++;
    }
    
    // Output the result
    cout << "The number of integers between 1 and " << n 
         << " with exactly " << x << " divisors is: " << count << endl;
    
    return 0;
}
