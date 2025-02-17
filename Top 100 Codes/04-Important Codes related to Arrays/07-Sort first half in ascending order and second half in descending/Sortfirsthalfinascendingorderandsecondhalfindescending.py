def printOrder(arr, n):
    # Sorting the array
    arr.sort()

    # Printing first half in ascending order
    i = 0
    while i < n // 2:  # Integer division for correct indexing
        print(arr[i], end=" ")
        i += 1

    # Printing second half in descending order
    j = n - 1
    while j >= n // 2:
        print(arr[j], end=" ")
        j -= 1

# Driver code
arr = [5, 4, 6, 2, 1, 3, 8, 9, 7]
n = len(arr)

printOrder(arr, n)
