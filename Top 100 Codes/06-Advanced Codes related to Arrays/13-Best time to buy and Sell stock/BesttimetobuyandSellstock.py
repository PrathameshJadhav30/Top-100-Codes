def maxProfit(prices):
    min_price = float('inf')
    max_profit = 0

    for i in range(len(prices)):
        if prices[i] < min_price:
            min_price = prices[i]  # update the minimum price
        elif prices[i] - min_price > max_profit:
            max_profit = prices[i] - min_price  # update the max profit

    return max_profit

# Example usage
prices = [7, 1, 5, 3, 6, 4]
profit = maxProfit(prices)
print("Maximum Profit:", profit)
