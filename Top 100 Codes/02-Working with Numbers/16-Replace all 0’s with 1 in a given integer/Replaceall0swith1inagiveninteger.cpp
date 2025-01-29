#include <bits/stdc++.h>
using namespace std;

int main() {
    string num;

    // Taking user input as a string to handle large numbers
    cout << "Enter number: ";
    cin >> num;

    // Replace all '0's with '1's using a normal for loop
    for (int i = 0; i < num.length(); i++) {
        if (num[i] == '0') 
            num[i] = '1';
    }

    // Output the converted number
    cout << "Converted number is: " << num << endl;

    return 0;
}
