def smallest_element(arr, n):
    """
    Recursive function to find the smallest element in an array.
    
    :param arr: List of integers
    :param n: Size of the list
    :return: Smallest element in the list
    """
    # Base case: If the list has only one element, return that element
    if n == 1:
        return arr[0]

    # Recursive case: Compare the last element with the smallest in the remaining list
    return min(arr[n - 1], smallest_element(arr, n - 1))


# Example usage
arr = [10, 45, 78, 34, 67]

# Find the smallest element
print("Smallest Element is", smallest_element(arr, len(arr)))
