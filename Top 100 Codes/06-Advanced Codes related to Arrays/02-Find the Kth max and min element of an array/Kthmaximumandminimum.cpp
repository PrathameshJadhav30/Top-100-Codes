#include<iostream>
#include<algorithm>

using namespace std;

void findKthMinMax(int arr[], int n, int k){
    if(k > n){
        cout<<"K is Larger than Array.";
        return ;
    }

    sort(arr , arr + n);

    cout << k << "th Minimum element is: " << arr[k - 1] << endl;
    cout << k << "th Maximum element is: " << arr[n - k] << endl;
}
int main(){
    int arr[] = {2,12,34,123,45,67,98,33,45};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;

    cout << "Enter value of K: ";
    cin >> k;

    findKthMinMax(arr, n, k);

    return 0;
}