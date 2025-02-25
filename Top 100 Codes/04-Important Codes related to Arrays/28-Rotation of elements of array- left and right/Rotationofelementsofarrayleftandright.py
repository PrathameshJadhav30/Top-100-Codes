def reverse(arr, start, end):
    while start < end:
        arr[start], arr[end] = arr[end], arr[start]
        start += 1
        end -= 1

def rotate_left(arr, d):
    n = len(arr)
    d %= n  # Handle cases where d > n
    reverse(arr, 0, d - 1)
    reverse(arr, d, n - 1)
    reverse(arr, 0, n - 1)

def rotate_right(arr, d):
    rotate_left(arr, len(arr) - (d % len(arr)))  # Right rotation is equivalent to left rotation by (n-d)

# Example usage
arr = [1, 2, 3, 4, 5, 6, 7]
d = int(input("Enter number of positions to rotate: "))

left_arr = arr[:]  # Copy original array for left rotation
right_arr = arr[:]  # Copy original array for right rotation

rotate_left(left_arr, d)
rotate_right(right_arr, d)

print("Left Rotation:", left_arr)
print("Right Rotation:", right_arr)
