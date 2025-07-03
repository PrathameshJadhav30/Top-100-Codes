def count_less_equal(matrix, mid, n):
    count = 0
    row = n - 1
    col = 0

    while row >= 0 and col < n:
        if matrix[row][col] <= mid:
            count += row + 1
            col += 1
        else:
            row -= 1
    return count

def kth_smallest(matrix, k):
    n = len(matrix)
    low = matrix[0][0]
    high = matrix[-1][-1]

    while low < high:
        mid = (low + high) // 2
        count = count_less_equal(matrix, mid, n)

        if count < k:
            low = mid + 1
        else:
            high = mid
    return low

# Test
matrix = [
    [1, 5, 9],
    [10, 11, 13],
    [12, 13, 15]
]
k = 8
print("Kth Smallest Element is:", kth_smallest(matrix, k))
