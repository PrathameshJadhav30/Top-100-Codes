#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 7, 9, 20, 33, 40, 55, 68}; //  array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Number of even elements: " << evenCount << endl;
    cout << "Number of odd elements: " << oddCount << endl;

    return 0;
}
