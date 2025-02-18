#include <iostream>
#include <unordered_map>

using namespace std;

void findFrequency(int arr[], int size) {
    unordered_map<int, int> freqMap;

    // Counting frequency of each element
    for (int i = 0; i < size; i++) {
        freqMap[arr[i]]++;
    }

    // Printing frequencies with simple logic
    cout << "Element Frequencies:\n";
    for (pair<int, int> element : freqMap) {  
        cout << element.first << " -> " << element.second << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 1, 5, 1, 3, 3, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    findFrequency(arr, size);

    return 0;
}
