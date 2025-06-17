def three_way_partition(arr, lowVal, highVal):
    start, end = 0, len(arr) - 1
    i = 0

    while i <= end:
        if arr[i] < lowVal:
            arr[i], arr[start] = arr[start], arr[i]
            start += 1
            i += 1
        elif arr[i] > highVal:
            arr[i], arr[end] = arr[end], arr[i]
            end -= 1
        else:
            i += 1

# Example usage
arr = [1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32]
lowVal, highVal = 14, 20
three_way_partition(arr, lowVal, highVal)
print("Partitioned array:", arr)
