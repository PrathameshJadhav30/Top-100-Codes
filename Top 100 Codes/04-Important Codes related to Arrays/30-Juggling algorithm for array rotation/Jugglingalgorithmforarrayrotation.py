import math

def juggle_rotate(arr, d, n):
    d = d % n  # Handle cases where d >= n
    gcd = math.gcd(n, d)  # Find GCD of n and d

    for i in range(gcd):
        temp = arr[i]  # Store the first element of the set
        j = i

        while True:
            k = j + d
            if k >= n:
                k -= n  # Wrap around if out of bounds

            if k == i:
                break  # If cycle is complete

            arr[j] = arr[k]  # Move next element to current position
            j = k

        arr[j] = temp  # Place stored value at the correct position

def print_array(arr):
    print(" ".join(map(str, arr)))

# Driver code
arr = [1, 2, 3, 4, 5, 6, 7]
d = 3  # Rotate left by 3 positions
n = len(arr)

print("Original Array:")
print_array(arr)

juggle_rotate(arr, d, n)

print("Rotated Array:")
print_array(arr)
