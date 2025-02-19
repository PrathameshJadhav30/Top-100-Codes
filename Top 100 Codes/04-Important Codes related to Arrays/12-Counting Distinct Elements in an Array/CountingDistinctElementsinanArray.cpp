#include <bits/stdc++.h>
using namespace std;

int main() 
{ 
    int arr[] = {10, 30, 40, 20, 10, 20, 50, 10}; 
    int n = sizeof(arr) / sizeof(arr[0]); 

    unordered_set<int> uniqueElements(arr, arr + n);

    cout << uniqueElements.size(); // Output: 5

    return 0;
}
