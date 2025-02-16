#include <bits/stdc++.h>
using namespace std;

// Recursive Function to get sum
int getSum(int arr[], int index, int len) {
    if (index == len)  // Base case: If index reaches the array length, return 0
        return 0;
    
    return arr[index] + getSum(arr, index + 1, len);
}

int main() {
    int arr[] = {10, 20, 30, 50, 89};
    int n = sizeof(arr) / sizeof(arr[0]); 

    cout << "Sum of array elements: " << getSum(arr, 0, n) << endl;
    return 0;
}
