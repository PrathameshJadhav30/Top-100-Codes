from math import gcd
from functools import reduce

def can_make_equal(arr):
    if len(arr) == 1:
        return True  # A single number is always equal to itself

    arr.sort()  # Sort the array to find the smallest element
    differences = [arr[i] - arr[0] for i in range(1, len(arr))]

    # Compute the GCD of all differences
    gcd_value = reduce(gcd, differences)

    return gcd_value != 0  # If GCD is nonzero, numbers can be made equal

# Example test case
arr = [6, 10, 14]  # Example test case
if can_make_equal(arr):
    print("Yes, all numbers can be made equal.")
else:
    print("No, all numbers cannot be made equal.")
