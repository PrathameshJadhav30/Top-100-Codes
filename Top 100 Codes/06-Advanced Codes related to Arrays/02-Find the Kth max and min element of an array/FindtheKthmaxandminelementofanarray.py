def find_kth_min_max(arr, k):
    if k > len(arr):
        return None, None
    
    arr.sort()  # Sort the array in ascending order
    
    kth_min = arr[k - 1]      # k-th smallest is at index k-1
    kth_max = arr[-k]         # k-th largest is at index -k
    
    return kth_min, kth_max

# Example usage
arr = [7, 10, 4, 3, 20, 15]
k = 3

min_val, max_val = find_kth_min_max(arr, k)
print(f"{k}th Minimum element is: {min_val}")
print(f"{k}th Maximum element is: {max_val}")
