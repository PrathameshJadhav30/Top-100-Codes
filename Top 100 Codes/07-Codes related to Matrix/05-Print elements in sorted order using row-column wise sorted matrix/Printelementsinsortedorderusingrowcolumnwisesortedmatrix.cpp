#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define N 4

// Struct to store elements with their position
struct HeapNode {
    int val; // value
    int r;   // row
    int c;   // column
};

// Compare function for min heap
struct compare {
    bool operator()(HeapNode x, HeapNode y) {
        return x.val > y.val;
    }
};

void printSorted(int mat[N][N]) {
    priority_queue<HeapNode, vector<HeapNode>, compare> minHeap;

    // insert first element of each row
    for (int i = 0; i < N; i++) {
        minHeap.push({ mat[i][0], i, 0 });
    }

    // extract minimum and push the next element from the same row
    while (!minHeap.empty()) {
        HeapNode curr = minHeap.top();
        minHeap.pop();
        cout << curr.val << " ";

        int r = curr.r;
        int c = curr.c;

        if (c + 1 < N) {
            minHeap.push({ mat[r][c + 1], r, c + 1 });
        }
    }
}

int main() {
    int mat[N][N] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    cout << "Sorted elements: ";
    printSorted(mat);

    return 0;
}
