def rotate_array(arr, d):
    n = len(arr)
    d = d % n  # Ensure d is within bounds

    # Perform left rotation using slicing
    arr[:] = arr[d:] + arr[:d]
    return arr

# Example usage
arr = [1, 2, 3, 4, 5, 6, 7]
d = 3

print("Original Array:", arr)
rotate_array(arr, d)
print("Rotated Array:", arr)
