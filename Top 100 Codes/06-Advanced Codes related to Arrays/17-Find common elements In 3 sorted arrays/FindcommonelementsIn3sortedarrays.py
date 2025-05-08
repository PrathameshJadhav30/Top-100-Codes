def find_common_elements(arr1, arr2, arr3):
    # Convert lists to sets and use intersection
    return sorted(set(arr1) & set(arr2) & set(arr3))

# Example usage
arr1 = [1, 5, 5, 10, 20, 40, 80]
arr2 = [5, 5, 10, 20, 80, 100]
arr3 = [5, 5, 10, 20, 30, 80, 120]

common = find_common_elements(arr1, arr2, arr3)
print("Common elements:", common)
