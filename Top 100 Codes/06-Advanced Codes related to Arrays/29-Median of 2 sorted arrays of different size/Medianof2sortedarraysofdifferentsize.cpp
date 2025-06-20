#include <iostream>
#include <vector>
using namespace std;

double findMedian(vector<int>& a, vector<int>& b) {
    vector<int> merged;
    int i = 0, j = 0;

    // Merge step
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j])
            merged.push_back(a[i++]);
        else
            merged.push_back(b[j++]);
    }
    while (i < a.size()) merged.push_back(a[i++]);
    while (j < b.size()) merged.push_back(b[j++]);

    int n = merged.size();
    if (n % 2 == 0)
        return (merged[n / 2 - 1] + merged[n / 2]) / 2.0;
    else
        return merged[n / 2];
}

int main() {
    vector<int> a = {1, 3, 8};
    vector<int> b = {7, 9, 10, 11};
    cout << "Median is: " << findMedian(a, b) << endl;
    return 0;
}
