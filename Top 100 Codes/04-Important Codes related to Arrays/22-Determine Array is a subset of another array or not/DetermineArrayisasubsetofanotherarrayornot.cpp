#include <iostream>
#include <unordered_set>
using namespace std;

bool isSubset(int arr1[], int n1, int arr2[], int n2) {
    unordered_set<int> set1;

    // Insert all elements of arr1 into a hash set
    for (int i = 0; i < n1; i++)
        set1.insert(arr1[i]);

    // Check if all elements of arr2 exist in set1
    for (int i = 0; i < n2; i++) {
        if (set1.find(arr2[i]) == set1.end())
            return false;  // If any element is not found, it's not a subset
    }

    return true; // All elements of arr2 are found in arr1
}

int main() {
    int arr1[] = {10, 5, 3, 6, 8, 9};
    int arr2[] = {5, 3, 9};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    if (isSubset(arr1, n1, arr2, n2))
        cout << "arr2 is a subset of arr1\n";
    else
        cout << "arr2 is NOT a subset of arr1\n";

    return 0;
}
