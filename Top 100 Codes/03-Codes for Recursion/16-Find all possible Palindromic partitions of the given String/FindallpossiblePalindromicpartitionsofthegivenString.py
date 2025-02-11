def is_palindrome(s, start, end):
    """Check if the substring s[start:end+1] is a palindrome."""
    while start < end:
        if s[start] != s[end]:
            return False
        start += 1
        end -= 1
    return True

def find_partitions(s, start, current, result):
    """Recursive function to find all palindromic partitions."""
    if start == len(s):
        result.append(current[:])  # Add a copy of the current partition to the result
        return
    
    for end in range(start, len(s)):
        if is_palindrome(s, start, end):
            current.append(s[start:end+1])  # Add the palindrome substring
            find_partitions(s, end + 1, current, result)  # Recur for the remaining string
            current.pop()  # Backtrack to try other partitions

def all_palindromic_partitions(s):
    """Function to print all palindromic partitions of a string."""
    result = []
    find_partitions(s, 0, [], result)
    
    print("All possible palindromic partitions:")
    for partition in result:
        print(" ".join(partition))

# Main function to take user input and call the partitioning function
if __name__ == "__main__":
    s = input("Enter a string: ")
    all_palindromic_partitions(s)
