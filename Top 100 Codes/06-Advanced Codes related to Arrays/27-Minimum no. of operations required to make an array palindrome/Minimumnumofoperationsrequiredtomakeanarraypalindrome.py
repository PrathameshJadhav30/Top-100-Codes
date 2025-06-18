def min_operations_to_make_palindrome(arr):
    i = 0
    j = len(arr) - 1
    operations = 0

    while i < j:
        if arr[i] == arr[j]:
            i += 1
            j -= 1
        elif arr[i] < arr[j]:
            arr[i + 1] += arr[i]
            i += 1
            operations += 1
        else:
            arr[j - 1] += arr[j]
            j -= 1
            operations += 1

    return operations

# Example usage
arr = [1, 4, 5, 9, 1]
print("Minimum operations to make palindrome:", min_operations_to_make_palindrome(arr))
