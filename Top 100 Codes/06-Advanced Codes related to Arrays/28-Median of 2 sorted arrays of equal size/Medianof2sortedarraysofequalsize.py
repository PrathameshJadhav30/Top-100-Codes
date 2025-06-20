def find_median_sorted_arrays(a, b):
    n = len(a)
    merged = []
    i = j = 0

    # Merge the arrays
    while i < n and j < n:
        if a[i] < b[j]:
            merged.append(a[i])
            i += 1
        else:
            merged.append(b[j])
            j += 1

    while i < n:
        merged.append(a[i])
        i += 1
    while j < n:
        merged.append(b[j])
        j += 1

    # Median for even total length
    return (merged[n - 1] + merged[n]) / 2

# Example usage
a = [1, 3, 5]
b = [2, 4, 6]
median = find_median_sorted_arrays(a, b)
print("Median is:", median)
