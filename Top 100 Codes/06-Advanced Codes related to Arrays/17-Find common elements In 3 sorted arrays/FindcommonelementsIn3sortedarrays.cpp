#include <iostream>
#include <vector>
using namespace std;

vector<int> findCommonElements(int A[], int B[], int C[], int n1, int n2, int n3) {
    vector<int> result;
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2 && k < n3) {
        // Skip duplicates in A
        while (i > 0 && i < n1 && A[i] == A[i - 1]) i++;
        // Skip duplicates in B
        while (j > 0 && j < n2 && B[j] == B[j - 1]) j++;
        // Skip duplicates in C
        while (k > 0 && k < n3 && C[k] == C[k - 1]) k++;

        // Ensure indexes are within bounds after skipping
        if (i < n1 && j < n2 && k < n3) {
            if (A[i] == B[j] && B[j] == C[k]) {
                result.push_back(A[i]);
                i++; j++; k++;
            }
            else if (A[i] < B[j]) i++;
            else if (B[j] < C[k]) j++;
            else k++;
        }
    }

    return result;
}

int main() {
    int A[] = {1, 5, 5, 10, 20, 40, 80};
    int B[] = {5, 5, 10, 20, 80, 100};
    int C[] = {5, 5, 10, 20, 30, 80, 120};

    int n1 = sizeof(A) / sizeof(A[0]);
    int n2 = sizeof(B) / sizeof(B[0]);
    int n3 = sizeof(C) / sizeof(C[0]);

    vector<int> common = findCommonElements(A, B, C, n1, n2, n3);

    cout << "Common elements: ";
    for (int val : common) cout << val << " ";
    cout << endl;

    return 0;
}
