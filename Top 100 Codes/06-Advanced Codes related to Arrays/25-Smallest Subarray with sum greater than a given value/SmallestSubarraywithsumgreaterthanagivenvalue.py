def smallest_subarray_with_sum(arr, x):
    n = len(arr)
    min_len = float('inf')
    start = 0
    curr_sum = 0

    for end in range(n):
        curr_sum += arr[end]

        # Shrink the window from the start as long as the sum is greater than x
        while curr_sum > x:
            min_len = min(min_len, end - start + 1)
            curr_sum -= arr[start]
            start += 1

    return 0 if min_len == float('inf') else min_len

# Example usage
arr = [1, 4, 45, 6, 0, 19]
x = 51
print("Smallest subarray length:", smallest_subarray_with_sum(arr, x))
