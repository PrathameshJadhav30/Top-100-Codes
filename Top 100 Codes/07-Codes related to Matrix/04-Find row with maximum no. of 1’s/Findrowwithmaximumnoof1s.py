def row_with_max_1s(matrix):
    n = len(matrix)
    m = len(matrix[0])

    max_row_index = -1
    j = m - 1  # Start from top-right corner

    for i in range(n):
        while j >= 0 and matrix[i][j] == 1:
            j -= 1
            max_row_index = i

    return max_row_index

# Test input
mat = [
    [0, 0, 0, 1],
    [0, 1, 1, 1],
    [0, 0, 1, 1],
    [0, 0, 0, 0]
]

index = row_with_max_1s(mat)
if index != -1:
    print(f"Row with maximum 1s is: {index}")
else:
    print("No 1s in the matrix")
