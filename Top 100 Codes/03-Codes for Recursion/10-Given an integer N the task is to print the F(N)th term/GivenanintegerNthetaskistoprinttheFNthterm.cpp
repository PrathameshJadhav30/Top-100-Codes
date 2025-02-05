#include <iostream>
using namespace std;

int term(int calculated, int current, int N) {
    int i, cur = 1;

    // Base case: Stop when current exceeds N
    if (current == N + 1)
        return 0;

    // Calculate product of `current` consecutive integers starting from `calculated`
    for (i = calculated; i < calculated + current; i++) {
        cur *= i;
    }

    // Recursive call with the updated values
    return cur + term(i, current + 1, N);
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    int result = term(1, 1, N);
    cout << "Result: " << result << endl;
    return 0;
}
