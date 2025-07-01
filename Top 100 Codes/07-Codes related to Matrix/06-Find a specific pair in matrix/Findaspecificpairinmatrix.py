def find_max_value(mat):
    n = len(mat)
    max_arr = [[0 for _ in range(n)] for _ in range(n)]

    max_arr[n - 1][n - 1] = mat[n - 1][n - 1]

    # Fill last row
    for j in range(n - 2, -1, -1):
        max_arr[n - 1][j] = max(mat[n - 1][j], max_arr[n - 1][j + 1])

    # Fill last column
    for i in range(n - 2, -1, -1):
        max_arr[i][n - 1] = max(mat[i][n - 1], max_arr[i + 1][n - 1])

    max_value = float('-inf')

    # Fill rest of the matrix
    for i in range(n - 2, -1, -1):
        for j in range(n - 2, -1, -1):
            potential = max_arr[i + 1][j + 1] - mat[i][j]
            max_value = max(max_value, potential)

            max_arr[i][j] = max(
                mat[i][j],
                max(max_arr[i + 1][j], max_arr[i][j + 1])
            )

    return max_value


# Example usage
matrix = [
    [1, 2, -1, -4, -20],
    [-8, -3, 4, 2, 1],
    [3, 8, 6, 1, 3],
    [-4, -1, 1, 7, -6],
    [0, -4, 10, -5, 1]
]

print("Maximum Value =", find_max_value(matrix))
