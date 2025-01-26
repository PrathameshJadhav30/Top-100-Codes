// Algorithmic way (Binary to Decimal)
#include <bits/stdc++.h>
using namespace std;

// Function to convert binary to decimal
int getDecimal(long long num)
{
    int i = 0, decimal = 0;

    while (num != 0)
    {
        int digit = num % 10;
        if (digit != 0 && digit != 1) {
            cout << "Error: Input is not a valid binary number." << endl;
            exit(0);
        }
        decimal += digit * pow(2, i);
        num /= 10;
        i++;
    }
    return decimal;
}

int main()
{
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    cout << "Decimal value: " << getDecimal(binary) << endl;

    return 0;
}
