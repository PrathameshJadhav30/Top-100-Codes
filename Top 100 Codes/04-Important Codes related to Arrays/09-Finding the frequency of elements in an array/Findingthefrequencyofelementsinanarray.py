def countFreq(arr):
    freq = {}

    # Count frequencies
    for num in arr:
        freq[num] = freq.get(num, 0) + 1

    # Print frequencies
    for key, value in freq.items():
        print(key, "->", value)

# Driver Code
arr = [10, 30, 10, 20, 10, 20, 30, 10]
countFreq(arr)
