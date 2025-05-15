def rearrange_alternate(arr):
    # Separate positive and negative numbers
    pos = [x for x in arr if x >= 0]
    neg = [x for x in arr if x < 0]

    # Reconstruct the array in alternating order
    result = []
    i = j = 0

    # Alternate insertion
    while i < len(pos) and j < len(neg):
        result.append(neg[j])
        result.append(pos[i])
        i += 1
        j += 1

    # Append remaining elements
    result.extend(neg[j:])
    result.extend(pos[i:])

    # Copy result back into original array (if in-place is desired)
    for i in range(len(arr)):
        arr[i] = result[i]

# Example usage:
arr = [1, 2, 3, -4, -1, 4, -2, -3]
rearrange_alternate(arr)
print("Rearranged array:", arr)
