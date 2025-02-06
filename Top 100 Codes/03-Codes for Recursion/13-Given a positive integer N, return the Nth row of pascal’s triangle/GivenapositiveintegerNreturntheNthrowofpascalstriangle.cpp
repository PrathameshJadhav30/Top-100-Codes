#include <iostream>
#include <vector>
using namespace std;

vector<int> getNthRow(int n) {
    vector<int> row(n + 1, 1);  // Initialize all elements as 1

    for (int i = 1; i < n; ++i) {
        row[i] = (row[i - 1] * (n - i + 1)) / i;  // Compute using binomial coefficient
    }

    return row;
}

int main() {
    int n;
    cout << "Enter the row number (0-indexed): ";
    cin >> n;

    vector<int> nthRow = getNthRow(n);

    cout << "The " << n << "th row of Pascal's Triangle is: ";
    for (int num : nthRow) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
