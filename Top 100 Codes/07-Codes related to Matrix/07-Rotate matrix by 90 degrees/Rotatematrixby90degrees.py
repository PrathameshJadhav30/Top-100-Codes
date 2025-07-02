def rotate_matrix(matrix):
    n = len(matrix)

    # Step 1: Transpose the matrix
    for i in range(n):
        for j in range(i, n):
            matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]

    # Step 2: Reverse each row
    for row in matrix:
        row.reverse()

# Function to print matrix
def print_matrix(matrix):
    for row in matrix:
        print(" ".join(map(str, row)))

# Example
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

print("Original Matrix:")
print_matrix(matrix)

rotate_matrix(matrix)

print("\nMatrix After 90 Degree Rotation:")
print_matrix(matrix)
