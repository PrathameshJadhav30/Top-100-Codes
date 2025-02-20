def count(arr):
    mp = {}

    # Count frequency
    for num in arr:
        mp[num] = mp.get(num, 0) + 1

    # Print elements with frequency > 1
    for key, value in mp.items():
        if value == 1:
            print(key)

# Driver Code
arr = [10, 30, 40, 20, 10, 20, 50, 10] 
count(arr)
