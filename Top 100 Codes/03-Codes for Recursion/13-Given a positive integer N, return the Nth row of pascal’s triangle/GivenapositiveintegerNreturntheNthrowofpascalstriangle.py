def get_nth_row(n):
    row = [1]  # Initialize the first element as 1
    for i in range(1, n + 1):
        row.append(row[i - 1] * (n - i + 1) // i)  # Calculate using binomial coefficient
    return row

# Example usage
n = int(input("Enter the row number (0-indexed): "))
nth_row = get_nth_row(n)
print(f"The {n}th row of Pascal's Triangle is: {nth_row}")
