#include <iostream>

using namespace std;

void sortByFrequency(int arr[], int n) {
    int freq[n], visited = -1;

    // Step 1: Count frequency of each element
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = visited;  // Mark as visited
            }
        }
        if (freq[i] != visited) {
            freq[i] = count;
        }
    }

    // Step 2: Sort elements by frequency using simple loops
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // Swap based on frequency, or value if same frequency
            if ((freq[i] < freq[j]) || (freq[i] == freq[j] && arr[i] > arr[j])) {
                swap(arr[i], arr[j]);
                swap(freq[i], freq[j]);
            }
        }
    }

    // Step 3: Print the sorted elements
    for (int i = 0; i < n; i++) {
        if (freq[i] != visited) {  // Only print unvisited elements
            for (int j = 0; j < freq[i]; j++) {
                cout << arr[i] << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 5, 6, 5, 4, 3, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Sorted by frequency: ";
    sortByFrequency(arr, n);

    return 0;
}
