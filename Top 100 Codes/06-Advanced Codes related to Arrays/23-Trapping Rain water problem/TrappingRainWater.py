def trap(height):
    n = len(height)
    if n == 0:
        return 0

    left_max = [0] * n
    right_max = [0] * n

    # Fill left max for each index
    left_max[0] = height[0]
    for i in range(1, n):
        left_max[i] = max(height[i], left_max[i - 1])

    # Fill right max for each index
    right_max[n - 1] = height[n - 1]
    for i in range(n - 2, -1, -1):
        right_max[i] = max(height[i], right_max[i + 1])

    trapped_water = 0
    for i in range(n):
        trapped_water += min(left_max[i], right_max[i]) - height[i]

    return trapped_water

# Example usage
height = [0,1,0,2,1,0,1,3,2,1,2,1]
print("Trapped Rain Water:", trap(height))
