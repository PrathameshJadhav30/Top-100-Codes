def max_product_subarray(arr):
    if not arr:
        return 0  # Edge case: empty array

    max_prod = min_prod = result = arr[0]

    for i in range(1, len(arr)):
        if arr[i] < 0:
            max_prod, min_prod = min_prod, max_prod  # Swap when encountering a negative number

        max_prod = max(arr[i], max_prod * arr[i])  # Maximum product ending at i
        min_prod = min(arr[i], min_prod * arr[i])  # Minimum product ending at i

        result = max(result, max_prod)  # Update the global max product

    return result

# Example usage
arr = [2, 3, -2, 4, -1]
print("Maximum product of subarray:", max_product_subarray(arr))
