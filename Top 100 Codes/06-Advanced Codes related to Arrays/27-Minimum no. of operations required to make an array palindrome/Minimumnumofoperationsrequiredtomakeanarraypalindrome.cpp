#include <iostream>
#include <vector>
using namespace std;

// Function to find minimum operations to make array palindrome
int minOperationsToMakePalindrome(vector<int>& arr) {
    int i = 0, j = arr.size() - 1;
    int operations = 0;

    while (i < j) {
        if (arr[i] == arr[j]) {
            i++;
            j--;
        } else if (arr[i] < arr[j]) {
            arr[i + 1] += arr[i];
            i++;
            operations++;
        } else {
            arr[j - 1] += arr[j];
            j--;
            operations++;
        }
    }

    return operations;
}

int main() {
    vector<int> arr = {1, 4, 5, 9, 1};
    cout << "Minimum operations to make palindrome: " << minOperationsToMakePalindrome(arr) << endl;
    return 0;
}
