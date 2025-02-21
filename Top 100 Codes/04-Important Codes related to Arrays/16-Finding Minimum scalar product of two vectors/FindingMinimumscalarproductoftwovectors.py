# Define two lists
arr1 = [1, 2, 6, 3, 7]
arr2 = [10, 7, 45, 3, 7]

n = len(arr1)  # Get the size of the arrays (both should have the same length)

# Sort arr1 in ascending order
arr1.sort()

# Sort arr2 in descending order
arr2.sort(reverse=True)

# Compute the sum of the product of corresponding elements
product = sum(arr1[i] * arr2[i] for i in range(n))

# Print the final result
print("Minimum Sum of Product:", product)
