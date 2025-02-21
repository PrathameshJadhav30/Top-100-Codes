# Define two lists
arr1 = [1, 2, 6, 3, 7]
arr2 = [10, 7, 45, 3, 7]

n = len(arr1)  # Get the length of the arrays

# Sort both lists in descending order to maximize the product sum
arr1.sort(reverse=True)
arr2.sort(reverse=True)

# Compute the sum of products of corresponding elements
product = sum(arr1[i] * arr2[i] for i in range(n))

# Print the final result
print("Maximum Sum of Product:", product)
