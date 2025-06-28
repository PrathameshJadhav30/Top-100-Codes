from bisect import bisect_right

def findMedian(matrix, R, C):
    min_val = min(row[0] for row in matrix)
    max_val = max(row[-1] for row in matrix)

    desired = (R * C + 1) // 2

    while min_val < max_val:
        mid = (min_val + max_val) // 2
        count = 0

        for row in matrix:
            count += bisect_right(row, mid)

        if count < desired:
            min_val = mid + 1
        else:
            max_val = mid

    return min_val

# Driver Code
matrix = [
    [1, 3, 5],
    [2, 6, 9],
    [3, 6, 9]
]
R = len(matrix)
C = len(matrix[0])

print("Median is", findMedian(matrix, R, C))
