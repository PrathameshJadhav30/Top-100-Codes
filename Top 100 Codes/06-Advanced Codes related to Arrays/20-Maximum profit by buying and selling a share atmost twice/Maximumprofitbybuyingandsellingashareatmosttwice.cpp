#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfitWithTwoTransactions(vector<int>& prices) {
    int n = prices.size();
    if (n == 0){
       return 0;
    } 

    vector<int> profit(n, 0);

    // First pass: right to left - max profit if sold after day i
    int max_price = prices[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        max_price = max(max_price, prices[i]);
        profit[i] = max(profit[i + 1], max_price - prices[i]);
    }

    // Second pass: left to right - max profit if bought before day i
    int min_price = prices[0];
    for (int i = 1; i < n; ++i) {
        min_price = min(min_price, prices[i]);
        profit[i] = max(profit[i - 1], profit[i] + (prices[i] - min_price));
    }

    return profit[n - 1];
}

int main() {
    vector<int> prices = {3, 3, 5, 0, 0, 3, 1, 4};
    cout << "Maximum Profit: " << maxProfitWithTwoTransactions(prices) << endl;
    return 0;
}
