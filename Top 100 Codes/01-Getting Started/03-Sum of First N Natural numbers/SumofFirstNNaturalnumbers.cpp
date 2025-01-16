//using recursion
#include <iostream>
using namespace std;

// Function to calculate the sum of first N natural numbers using recursion
int sumOfFirstN(int n) {
    // Base case
    if (n == 0)
        return 0;
    // Recursive case
    return n + sumOfFirstN(n - 1);
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    if (N < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }

    int result = sumOfFirstN(N);
    cout << "The sum of the first " << N << " natural numbers is: " << result << endl;

    return 0;
}
