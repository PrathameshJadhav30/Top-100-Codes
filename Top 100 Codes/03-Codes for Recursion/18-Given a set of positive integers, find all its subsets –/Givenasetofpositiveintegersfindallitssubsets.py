def generate_subsets(nums, current, index):
    if index == len(nums):
        print(current)  # Print the current subset
        return

    # Exclude the current element
    generate_subsets(nums, current, index + 1)
    
    # Include the current element
    generate_subsets(nums, current + [nums[index]], index + 1)

# Example usage
nums = [1, 2, 3]  # Example set
print("All subsets:")
generate_subsets(nums, [], 0)
