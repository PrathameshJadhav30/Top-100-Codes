from collections import Counter

def relative_sort(arr1, arr2):
    freq = Counter(arr1)  # Count occurrences of elements in arr1
    result = []

    # Add elements from arr2 in the given order
    for num in arr2:
        result.extend([num] * freq.pop(num, 0))

    # Add remaining elements in sorted order
    remaining = sorted(freq.elements())
    result.extend(remaining)

    return result

# Example usage
arr1 = [20, 1, 20, 5, 7, 1, 9, 39, 6, 18, 18]
arr2 = [20, 1, 18, 39]
print(*relative_sort(arr1, arr2))
