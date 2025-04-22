#include <iostream>
#include <algorithm> // For sort() and swap()
using namespace std;

void merge(int arr1[], int arr2[], int n, int m) {
    for (int i = 0; i < n; i++) 
    {
        if (arr1[i] > arr2[0]) 
        {
            swap(arr1[i], arr2[0]);
            sort(arr2, arr2 + m);
        }
    }
}

int main() {
    int arr1[] = {1, 4, 7, 8, 10};
    int arr2[] = {2, 3, 9};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    merge(arr1, arr2, n, m);

    cout << "Merged arrays:\n";
    for (int i = 0; i < n; i++){
        cout << arr1[i] << " ";
    } 
    for (int i = 0; i < m; i++){
        cout << arr2[i] << " ";
    } 
    cout << endl;

    return 0;
}
