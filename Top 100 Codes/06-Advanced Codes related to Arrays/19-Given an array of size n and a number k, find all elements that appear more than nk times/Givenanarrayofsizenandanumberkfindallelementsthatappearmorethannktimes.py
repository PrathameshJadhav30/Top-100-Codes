from collections import Counter

def find_elements(arr, k):
    n = len(arr)
    freq = Counter(arr)
    result = []

    for num, count in freq.items():
        if count > n // k:
            result.append(num)

    return result

# Example usage
arr = [3, 1, 2, 2, 1, 2, 3, 3]
k = 4
print(find_elements(arr, k))  # Output: [3, 2]
