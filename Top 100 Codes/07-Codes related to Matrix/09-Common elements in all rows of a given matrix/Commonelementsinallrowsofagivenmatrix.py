def print_common_elements(matrix):
    rows = len(matrix)
    cols = len(matrix[0])
    element_count = {}

    # Initialize the dictionary with first row elements
    for val in matrix[0]:
        element_count[val] = 1

    # Traverse remaining rows
    for i in range(1, rows):
        for j in range(cols):
            val = matrix[i][j]
            # If present in previous rows
            if val in element_count and element_count[val] == i:
                element_count[val] = i + 1

    # Print elements whose count is equal to number of rows
    print("Common elements in all rows:", end=" ")
    for key, count in element_count.items():
        if count == rows:
            print(key, end=" ")
    print()

# Example usage
matrix = [
    [1, 2, 1, 4, 8],
    [3, 7, 8, 5, 1],
    [8, 7, 7, 3, 1],
    [8, 1, 2, 7, 9]
]

print_common_elements(matrix)
