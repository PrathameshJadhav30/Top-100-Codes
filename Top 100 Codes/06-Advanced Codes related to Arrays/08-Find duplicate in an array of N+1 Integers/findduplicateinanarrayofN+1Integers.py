def find_duplicate(nums):
    seen = set()
    for num in nums:
        if num in seen:
            return num
        seen.add(num)
    return -1  # If no duplicate found (shouldn't happen for N+1 array)

nums = [1, 3, 4, 2, 2]
print("Duplicate number is:", find_duplicate(nums))
