def find_equilibrium_indices(arr):
    total_sum = sum(arr)  # Compute total sum of the array
    left_sum = 0
    equilibrium_indices = []

    for i in range(len(arr)):
        # Right sum = total_sum - left_sum - arr[i]
        if left_sum == (total_sum - left_sum - arr[i]):
            equilibrium_indices.append(i)  # Store equilibrium index
        
        left_sum += arr[i]  # Update left sum for next iteration

    return equilibrium_indices

# Example usage
arr = [-7, 1, 5, 2, -4, 3, 0]
result = find_equilibrium_indices(arr)

# Output result
if result:
    print("Equilibrium indices:", result)
else:
    print("No equilibrium index found")
