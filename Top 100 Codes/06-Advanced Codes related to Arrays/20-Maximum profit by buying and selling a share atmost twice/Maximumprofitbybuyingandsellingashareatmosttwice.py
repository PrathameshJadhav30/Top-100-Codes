def max_profit_with_two_transactions(prices):
    n = len(prices)
    if n == 0:
        return 0

    profit = [0] * n

    # First pass: max profit if sold after day i
    max_price = prices[-1]
    for i in range(n - 2, -1, -1):
        max_price = max(max_price, prices[i])
        profit[i] = max(profit[i + 1], max_price - prices[i])

    # Second pass: max profit if bought before day i
    min_price = prices[0]
    for i in range(1, n):
        min_price = min(min_price, prices[i])
        profit[i] = max(profit[i - 1], profit[i] + (prices[i] - min_price))

    return profit[-1]

# Example usage
prices = [3, 3, 5, 0, 0, 3, 1, 4]
print("Maximum Profit:", max_profit_with_two_transactions(prices))
