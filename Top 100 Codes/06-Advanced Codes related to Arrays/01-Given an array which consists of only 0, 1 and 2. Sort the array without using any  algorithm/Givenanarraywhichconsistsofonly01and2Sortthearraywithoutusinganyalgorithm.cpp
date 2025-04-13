#include<iostream>
using namespace std;

void sort012(int arr[], int n){
    int Count0 = 0, Count1 = 0, Count2 = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            Count0++;
        }
        else if(arr[i] == 1){
            Count1++;
        }
        else if( arr[i] == 2){
            Count2++;
        }
    }

    int index = 0;

    while(Count0--){
        arr[index++] = 0;
    }

    while(Count1--){
        arr[index++] = 1;
    }

    while(Count2--){
        arr[index++] = 2;
    }
}
int main() {
    int arr[] = {0, 2, 1, 2, 0, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    } 
    cout << endl;

    sort012(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    } 
    cout << endl;

    return 0;
}