def get_min_diff(arr, k):
    n = len(arr)
    arr.sort()

    result = arr[-1] - arr[0]

    smallest = arr[0] + k
    largest = arr[-1] - k

    for i in range(n - 1):
        min_elem = min(smallest, arr[i + 1] - k)
        max_elem = max(largest, arr[i] + k)

        if min_elem < 0:
            continue

        result = min(result, max_elem - min_elem)

    return result


arr = [1, 15, 10]
k = 6
print("Minimum difference is:", get_min_diff(arr, k))
