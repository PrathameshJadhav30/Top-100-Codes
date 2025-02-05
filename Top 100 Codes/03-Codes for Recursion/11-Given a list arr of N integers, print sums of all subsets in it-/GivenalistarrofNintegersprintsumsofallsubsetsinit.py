def subset_sums(arr, index, current_sum):
    if index == len(arr):
        # Base case: print the current sum
        print(current_sum, end=" ")
        return

    # Include the current element in the subset sum
    subset_sums(arr, index + 1, current_sum + arr[index])

    # Exclude the current element from the subset sum
    subset_sums(arr, index + 1, current_sum)

# Input
N = int(input("Enter the size of the array: "))
arr = list(map(int, input("Enter the elements of the array: ").split()))

print("Subset sums:")
subset_sums(arr, 0, 0)
