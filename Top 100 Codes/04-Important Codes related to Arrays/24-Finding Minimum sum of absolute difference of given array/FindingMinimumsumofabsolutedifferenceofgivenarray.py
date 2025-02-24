def sum_of_min_abs_diff(arr):
    n = len(arr)
    if n < 2:
        return 0  # If there's only one element, no difference exists.

    arr.sort()  # Sorting the array to bring closer elements together
    total_sum = 0

    for i in range(n):
        if i > 0:
            left_diff = abs(arr[i] - arr[i - 1])
        else:
            left_diff = float('inf')

        if i < n - 1:
            right_diff = abs(arr[i] - arr[i + 1])
        else:
            right_diff = float('inf')

        if left_diff < right_diff:
            min_diff = left_diff
        else:
            min_diff = right_diff

        total_sum += min_diff

    return total_sum

# Example usage
arr = [4, 2, 1, 8, 5]
print("Sum of minimum absolute differences:", sum_of_min_abs_diff(arr))
