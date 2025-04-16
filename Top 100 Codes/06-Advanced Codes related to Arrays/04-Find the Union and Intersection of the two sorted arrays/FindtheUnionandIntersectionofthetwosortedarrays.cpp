#include <iostream>
using namespace std;

void findUnionAndIntersection(int arr1[], int arr2[], int n1, int n2) {
    int i = 0, j = 0;
    int unionArr[100], intersectionArr[100]; // assuming size is enough
    int uIndex = 0, iIndex = 0;

    for (; i < n1 && j < n2;) {
        if (arr1[i] < arr2[j]) {
            unionArr[uIndex++] = arr1[i++];
        } else if (arr2[j] < arr1[i]) {
            unionArr[uIndex++] = arr2[j++];
        } else {
            unionArr[uIndex++] = arr1[i]; // or arr2[j]
            intersectionArr[iIndex++] = arr1[i];
            i++;
            j++;
        }
    }

    // Remaining elements of arr1
    for (; i < n1; i++) {
        unionArr[uIndex++] = arr1[i];
    }

    // Remaining elements of arr2
    for (; j < n2; j++) {
        unionArr[uIndex++] = arr2[j];
    }

    // Print union
    cout << "Union: ";
    for (int k = 0; k < uIndex; k++) {
        // Skip duplicates
        if (k == 0 || unionArr[k] != unionArr[k - 1])
            cout << unionArr[k] << " ";
    }
    cout << endl;

    // Print intersection
    cout << "Intersection: ";
    for (int k = 0; k < iIndex; k++) {
        // Skip duplicates
        if (k == 0 || intersectionArr[k] != intersectionArr[k - 1])
            cout << intersectionArr[k] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    findUnionAndIntersection(arr1, arr2, n1, n2);

    return 0;
}
