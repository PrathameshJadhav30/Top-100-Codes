def next_permutation(nums):
    n = len(nums)
    i = -1

    # Step 1: Find the first decreasing element from the end
    for k in range(n - 2, -1, -1):
        if nums[k] < nums[k + 1]:
            i = k
            break

    if i != -1:
        # Step 2: Find element just larger than nums[i]
        for j in range(n - 1, i, -1):
            if nums[j] > nums[i]:
                nums[i], nums[j] = nums[j], nums[i]
                break

    # Step 3: Reverse the elements from i+1 to end
    nums[i + 1:] = nums[i + 1:][::-1]

# Example usage
nums = [1, 2, 3]
next_permutation(nums)
print(nums)  # Output: [1, 3, 2]
