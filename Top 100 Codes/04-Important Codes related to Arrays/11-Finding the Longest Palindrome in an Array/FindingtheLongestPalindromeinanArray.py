def is_palindrome(num):
    return str(num) == str(num)[::-1]

def find_longest_palindrome(arr):
    longest = -1
    for i in range(len(arr)):
        if is_palindrome(arr[i]):
            longest = max(longest, arr[i])
    return longest

arr = [121, 232, 4554, 12321, 67876, 9876]
longest_palindrome = find_longest_palindrome(arr)

if longest_palindrome != -1:
    print(f"The longest palindrome in the array is: {longest_palindrome}")
else:
    print("No palindrome found in the array.")
