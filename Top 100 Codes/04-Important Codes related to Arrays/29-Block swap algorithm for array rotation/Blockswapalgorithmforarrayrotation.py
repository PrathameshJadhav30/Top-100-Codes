def swap_blocks(arr, start1, start2, size):
    for i in range(size):
        arr[start1 + i], arr[start2 + i] = arr[start2 + i], arr[start1 + i]

def block_swap_rotate(arr, d, n):
    if d == 0 or d == n:
        return  # No rotation needed

    i, j = d, n - d

    while i != j:
        if i < j:  
            swap_blocks(arr, d - i, d + j - i, i)
            j -= i
        else:  
            swap_blocks(arr, d - i, d, j)
            i -= j

    swap_blocks(arr, d - i, d, i)

def print_array(arr):
    print(" ".join(map(str, arr)))

# Driver code
arr = [1, 2, 3, 4, 5, 6, 7]
d = 3  # Rotate left by 3 positions
n = len(arr)

print("Original Array:")
print_array(arr)

block_swap_rotate(arr, d, n)

print("Rotated Array:")
print_array(arr)
