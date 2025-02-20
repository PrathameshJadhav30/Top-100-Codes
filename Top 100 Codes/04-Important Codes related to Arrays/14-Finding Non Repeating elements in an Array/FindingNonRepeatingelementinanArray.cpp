#include <bits/stdc++.h>
using namespace std;

int main() { 
    int arr[] = {10, 30, 40, 20, 10, 20, 40, 10,50}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    unordered_map<int, int> freq;

    // Count frequency of each element using a normal for loop
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print elements that appear  once using a normal for loop
    for (auto it = freq.begin(); it != freq.end(); it++) {
        if (it->second == 1) {
            cout << it->first << " ";
        }
    }

    return 0;
}
