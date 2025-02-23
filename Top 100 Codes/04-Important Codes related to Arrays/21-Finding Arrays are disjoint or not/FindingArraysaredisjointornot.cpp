#include <iostream>
#include <unordered_set>
using namespace std;

bool areDisjoint(int arr1[], int n1, int arr2[], int n2) {
    unordered_set<int> set1;

    // Insert all elements of arr1 into a hash set
    for (int i = 0; i < n1; i++)
        set1.insert(arr1[i]);

    // Check if any element of arr2 is present in the hash set
    for (int i = 0; i < n2; i++) {
        if (set1.find(arr2[i]) != set1.end())
            return false;  // Common element found
    }

    return true; // No common element found
}

int main() {
    int arr1[] = {10, 5, 3, 6};
    int arr2[] = {8, 7, 9};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    if (areDisjoint(arr1, n1, arr2, n2))
        cout << "Arrays are disjoint\n";
    else
        cout << "Arrays are not disjoint\n";

    return 0;
}
