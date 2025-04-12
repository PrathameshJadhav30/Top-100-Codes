#include <iostream>
#include <algorithm>
using namespace std;

void printPermutations(string str) {
    // Sort the string in lexicographical order
    sort(str.begin(), str.end());

    // Print all permutations using do-while and next_permutation
    do {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    cout << "All lexicographically sorted permutations:\n";
    printPermutations(input);

    return 0;
}
