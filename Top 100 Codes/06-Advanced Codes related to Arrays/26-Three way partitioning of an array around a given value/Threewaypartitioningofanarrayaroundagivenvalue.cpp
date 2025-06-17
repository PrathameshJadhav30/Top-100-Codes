#include <iostream>
#include <vector>
using namespace std;

void threeWayPartition(vector<int>& arr, int lowVal, int highVal) {
    int start = 0, end = arr.size() - 1;
    int i = 0;

    while (i <= end) {
        if (arr[i] < lowVal) {
            swap(arr[i], arr[start]);
            start++;
            i++;
        }
        else if (arr[i] > highVal) {
            swap(arr[i], arr[end]);
            end--;
        }
        else {
            i++;
        }
    }
}

int main() {
    vector<int> arr = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
    int lowVal = 14, highVal = 20;
    threeWayPartition(arr, lowVal, highVal);

    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}
