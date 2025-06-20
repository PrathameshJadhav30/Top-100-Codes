#include <iostream>
#include <vector>
using namespace std;

float findMedianSortedArrays(vector<int>& a, vector<int>& b) {
    int n = a.size();
    vector<int> merged(2 * n);
    int i = 0, j = 0, k = 0;

    // Merge the two arrays
    while (i < n && j < n) {
        if (a[i] < b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }
    while (i < n) merged[k++] = a[i++];
    while (j < n) merged[k++] = b[j++];

    // Median of even size = average of middle two
    return (merged[n - 1] + merged[n]) / 2.0;
}

int main() {
    vector<int> a = {1, 3, 5};
    vector<int> b = {2, 4, 6};
    float median = findMedianSortedArrays(a, b);
    cout << "Median is: " << median << endl;
    return 0;
}
