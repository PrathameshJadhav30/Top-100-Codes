def remove_adjacent_duplicates(s):
    n = len(s)
    if n < 2:
        return s

    result = []
    i = 0

    while i < n:
        # Check for adjacent duplicates
        if i < n - 1 and s[i] == s[i + 1]:
            # Skip all adjacent duplicates
            while i < n - 1 and s[i] == s[i + 1]:
                i += 1
        else:
            result.append(s[i])
        i += 1

    # Convert list back to string
    new_string = ''.join(result)

    # If no change, return the string
    if new_string == s:
        return new_string

    # Recursively call for further reduction
    return remove_adjacent_duplicates(new_string)


# Test the function
s = input("Enter a string: ")
result = remove_adjacent_duplicates(s)
print("Result after removing adjacent duplicates:", result)
