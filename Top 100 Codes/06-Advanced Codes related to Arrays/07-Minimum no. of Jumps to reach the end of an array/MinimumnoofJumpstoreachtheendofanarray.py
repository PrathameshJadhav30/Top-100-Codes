def min_jumps(arr):
    n = len(arr)

    # If the array has only one element or empty
    if n <= 1:
        return 0

    # If the first element is 0, we can't move
    if arr[0] == 0:
        return -1

    # Initialize variables
    maxReach = arr[0]
    steps = arr[0]
    jumps = 1

    for i in range(1, n):
        # If we have reached the end
        if i == n - 1:
            return jumps

        # Update the maxReach
        maxReach = max(maxReach, i + arr[i])

        # Use a step to move forward
        steps -= 1

        # If no more steps
        if steps == 0:
            jumps += 1

            # Check if current index is beyond maxReach
            if i >= maxReach:
                return -1

            # Re-initialize the steps
            steps = maxReach - i

    return -1


arr = [2, 3, 1, 1, 4]
print("Minimum number of jumps:", min_jumps(arr))
