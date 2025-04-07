# Take user input
original = input("Enter the original string: ")
to_replace = input("Enter the substring to replace: ")
replace_with = input("Enter the replacement substring: ")

# Replace the first occurrence only
updated = original.replace(to_replace, replace_with, 1)

print("Updated string:", updated)
