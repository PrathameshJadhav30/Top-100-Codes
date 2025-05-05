def has_zero_sum_subarray(arr):
    sum_set = set()
    current_sum = 0

    for i in range(len(arr)):
        current_sum += arr[i]

        # If current sum is 0 or already exists in set
        if current_sum == 0 or current_sum in sum_set:
            return True

        sum_set.add(current_sum)

    return False

# Example usage
arr = [4, 2, -3, 1, 6]
if has_zero_sum_subarray(arr):
    print("Yes, there is a subarray with sum 0.")
else:
    print("No, there is no subarray with sum 0.")
