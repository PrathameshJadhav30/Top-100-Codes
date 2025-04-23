def kadane_algorithm(nums):
    max_so_far = float('-inf')
    max_ending_here = 0

    for i in range(len(nums)):
        max_ending_here = max(nums[i], max_ending_here + nums[i])
        max_so_far = max(max_so_far, max_ending_here)

    return max_so_far


nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
print("Maximum subarray sum is", kadane_algorithm(nums))
