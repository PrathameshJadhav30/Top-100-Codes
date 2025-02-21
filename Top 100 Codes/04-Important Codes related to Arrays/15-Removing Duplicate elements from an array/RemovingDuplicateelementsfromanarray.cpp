#include <bits/stdc++.h>

using namespace std;

int main() {
    set<int> s = {10, 10, 20, 30, 30, 30, 40};  // Initializing the set

    // Using a normal for loop with an iterator
    for (auto it = s.begin(); it != s.end(); it++) {  
        cout << *it << " ";  // Dereferencing iterator to get value
    }

    return 0;
}
