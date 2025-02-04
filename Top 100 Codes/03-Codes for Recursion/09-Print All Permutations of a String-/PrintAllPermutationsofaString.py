def permute(s, l, r):
    if l == r:
        print("".join(s))
        return
    
    for i in range(l, r + 1):
        s[l], s[i] = s[i], s[l]  # Swap characters
        permute(s, l + 1, r)  # Recurse for the next character
        s[l], s[i] = s[i], s[l]  # Backtrack to the original order

# Taking input
s = input("Enter a string: ")
print("All permutations of the string:")
permute(list(s), 0, len(s) - 1)
