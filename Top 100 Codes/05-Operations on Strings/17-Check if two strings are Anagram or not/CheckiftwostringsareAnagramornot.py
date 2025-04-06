def are_anagrams(str1, str2):
    # If lengths differ, can't be anagrams
    if len(str1) != len(str2):
        return False
    
    # Sort both strings and compare
    return sorted(str1) == sorted(str2)

# Input
s1 = input("Enter first string: ")
s2 = input("Enter second string: ")

# Output
if are_anagrams(s1, s2):
    print("The strings are anagrams.")
else:
    print("The strings are not anagrams.")
