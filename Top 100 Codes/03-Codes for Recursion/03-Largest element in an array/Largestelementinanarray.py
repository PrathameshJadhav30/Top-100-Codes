def largest_element(arr, n):
    """Recursive function to find the largest element in an array"""
    if n == 1:  # Base condition: If only one element, return it
        return arr[0]
    
    return max(arr[n - 1], largest_element(arr, n - 1))  # Compare last element with recursive result

# Taking user input for array size
n = int(input("Enter the number of elements: "))

# Taking user input for array elements
arr = list(map(int, input("Enter the elements: ").split()))

# Checking if the array is empty
if n == 0:
    print("Array is empty, no largest element.")
else:
    # Display the largest element
    print("Largest Element is:", largest_element(arr, n))
