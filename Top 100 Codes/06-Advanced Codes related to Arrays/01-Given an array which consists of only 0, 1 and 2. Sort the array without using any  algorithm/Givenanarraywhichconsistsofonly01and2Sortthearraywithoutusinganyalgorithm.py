def sort012(arr):
    count0 = arr.count(0)
    count1 = arr.count(1)
    count2 = arr.count(2)

    # Overwrite the array
    sorted_arr = [0]*count0 + [1]*count1 + [2]*count2
    return sorted_arr

# Example usage
arr = [0, 2, 1, 2, 0, 1, 0]
print("Original array:", arr)

sorted_arr = sort012(arr)
print("Sorted array:", sorted_arr)
