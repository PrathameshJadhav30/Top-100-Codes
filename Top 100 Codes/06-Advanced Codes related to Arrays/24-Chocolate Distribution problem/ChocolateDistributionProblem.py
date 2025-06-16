def find_min_diff(arr, m):
    n = len(arr)
    if m == 0 or n == 0:
        return 0

    arr.sort()  # Sort the packets

    min_diff = float('inf')

    # Traverse windows of size m
    for i in range(n - m + 1):
        diff = arr[i + m - 1] - arr[i]
        min_diff = min(min_diff, diff)

    return min_diff

# Example usage
chocolates = [12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50]
m = 7  # Number of students
print("Minimum difference is:", find_min_diff(chocolates, m))
