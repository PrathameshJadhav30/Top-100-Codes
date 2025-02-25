def replace_with_ranks(arr):
    sorted_arr = sorted(arr)  # Sort the array
    rank_map = {}  # Dictionary to store ranks
    rank = 1

    # Assign ranks using normal for loop
    for i in range(len(sorted_arr)):
        if sorted_arr[i] not in rank_map:  # Only assign if not already assigned
            rank_map[sorted_arr[i]] = rank
            rank += 1

    # Replace elements with their ranks
    for i in range(len(arr)):
        arr[i] = rank_map[arr[i]]

    return arr


arr = [40, 10, 20, 30]
ranked_arr = replace_with_ranks(arr)
print("Ranked array:", ranked_arr)
