def merge_and_count(arr, left, mid, right):
    # Create subarrays
    left_sub = arr[left:mid + 1]
    right_sub = arr[mid + 1:right + 1]
    
    i = 0  # index for left_sub
    j = 0  # index for right_sub
    k = left  # index for original array
    swaps = 0

    # Merge the two subarrays and count inversions
    while i < len(left_sub) and j < len(right_sub):
        if left_sub[i] <= right_sub[j]:
            arr[k] = left_sub[i]
            i += 1
        else:
            arr[k] = right_sub[j]
            j += 1
            swaps += len(left_sub) - i  # Count inversions
        k += 1

    # Copy remaining elements
    while i < len(left_sub):
        arr[k] = left_sub[i]
        i += 1
        k += 1

    while j < len(right_sub):
        arr[k] = right_sub[j]
        j += 1
        k += 1

    return swaps


def merge_sort_and_count(arr, left, right):
    count = 0
    if left < right:
        mid = (left + right) // 2

        count += merge_sort_and_count(arr, left, mid)
        count += merge_sort_and_count(arr, mid + 1, right)
        count += merge_and_count(arr, left, mid, right)

    return count


# Example usage
arr = [2, 4, 1, 3, 5]
result = merge_sort_and_count(arr, 0, len(arr) - 1)
print("Number of inversions:", result)
