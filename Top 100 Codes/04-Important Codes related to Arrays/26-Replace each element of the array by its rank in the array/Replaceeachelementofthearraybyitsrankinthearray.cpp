#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

void replaceWithRanks(vector<int>& arr) {
    int n = arr.size();
    vector<int> sortedArr = arr;  // Copy original array
    sort(sortedArr.begin(), sortedArr.end());  // Sort the copied array

    // Use a hashmap to store ranks
    unordered_map<int, int> rankMap;
    int rank = 1;
    
    for (int i = 0; i < n; i++) {  // Assign rank using normal for loop
        if (rankMap.find(sortedArr[i]) == rankMap.end()) {  // Assign rank only if not assigned
            rankMap[sortedArr[i]] = rank;
            rank++;
        }
    }

    // Replace original elements with ranks using normal for loop
    for (int i = 0; i < n; i++) {
        arr[i] = rankMap[arr[i]];
    }
}

int main() {
    vector<int> arr = {40, 10, 20, 30}; 

    replaceWithRanks(arr);

    cout << "Ranked array: ";
    for (int i = 0; i < arr.size(); i++) {  // Normal for loop to print output
        cout << arr[i] << " ";
    }
    return 0;
}
