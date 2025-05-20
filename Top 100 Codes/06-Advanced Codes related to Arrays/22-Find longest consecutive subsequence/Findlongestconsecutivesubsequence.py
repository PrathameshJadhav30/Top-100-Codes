def find_longest_consecutive_subsequence(nums):
    num_set = set(nums)
    longest_streak = 0

    for num in num_set:
        # Only check if it's the start of a sequence
        if num - 1 not in num_set:
            current_num = num
            current_streak = 1

            # Count up the consecutive numbers
            while current_num + 1 in num_set:
                current_num += 1
                current_streak += 1

            longest_streak = max(longest_streak, current_streak)
    
    return longest_streak

# Example usage
nums = [100, 4, 200, 1, 3, 2]
print("Longest Consecutive Subsequence Length:", find_longest_consecutive_subsequence(nums))
