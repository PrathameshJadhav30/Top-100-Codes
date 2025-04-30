def find_pairs_with_sum(arr, target_sum):
    num_count = {}  # Dictionary to store frequencies
    found = False

    for i in range(len(arr)):
        current = arr[i]
        complement = target_sum - current

        # Check if complement exists in dictionary
        if complement in num_count:
            for _ in range(num_count[complement]):
                print(f"Pair found: ({complement}, {current})")
            found = True

        # Add current number to dictionary
        if current in num_count:
            num_count[current] += 1
        else:
            num_count[current] = 1

    if not found:
        print(f"No pairs found with sum {target_sum}.")

# Example usage
arr = [1, 5, 7, -1, 5]
target_sum = 6

print("Array:", arr)
print("Target Sum:", target_sum)
find_pairs_with_sum(arr, target_sum)
