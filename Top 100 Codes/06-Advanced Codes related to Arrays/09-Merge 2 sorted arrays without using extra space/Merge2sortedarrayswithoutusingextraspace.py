def merge(arr1, arr2):
    n, m = len(arr1), len(arr2)
    for i in range(n):
        if arr1[i] > arr2[0]:
            # Swap if arr1[i] > arr2[0]
            arr1[i], arr2[0] = arr2[0], arr1[i]
            # Re-sort arr2 to maintain its sorted order
            arr2.sort()

# Example usage
arr1 = [1, 4, 7, 8, 10]
arr2 = [2, 3, 9]

merge(arr1, arr2)

print("Merged arrays:")
print("arr1:", arr1)
print("arr2:", arr2)
