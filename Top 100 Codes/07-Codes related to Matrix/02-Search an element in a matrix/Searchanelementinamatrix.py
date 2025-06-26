def searchMatrix(matrix, target):
    n = len(matrix)
    m = len(matrix[0])

    row, col = 0, m - 1  # Start from top-right

    while row < n and col >= 0:
        if matrix[row][col] == target:
            return True
        elif matrix[row][col] > target:
            col -= 1  # Move left
        else:
            row += 1  # Move down

    return False

# Example usage
matrix = [
    [1, 4, 7, 11],
    [2, 5, 8, 12],
    [3, 6, 9, 16],
    [10,13,14,17]
]

target = 5

if searchMatrix(matrix, target):
    print("Element found!")
else:
    print("Element not found.")
