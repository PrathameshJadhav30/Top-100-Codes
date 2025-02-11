#include <iostream>
#include <vector>
using namespace std;

// Recursive function to generate valid N-bit binary numbers
void generateBinary(int n, int ones, int zeros, string current) {
    // If the length of the current string reaches n, print it
    if (current.length() == n) {
        cout << current << endl;
        return;
    }

    // Add '1' to the current string and recurse
    generateBinary(n, ones + 1, zeros, current + "1");

    // Add '0' only if the number of 1's is greater than the number of 0's
    if (ones > zeros) {
        generateBinary(n, ones, zeros + 1, current + "0");
    }
}

// Function to print all N-bit binary numbers with more 1's than 0's in all prefixes
void printNBitBinaryNumbers(int n) {
    generateBinary(n, 0, 0, "");
}

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    cout << "N-bit binary numbers having more 1's than 0's in all prefixes:\n";
    printNBitBinaryNumbers(n);

    return 0;
}
