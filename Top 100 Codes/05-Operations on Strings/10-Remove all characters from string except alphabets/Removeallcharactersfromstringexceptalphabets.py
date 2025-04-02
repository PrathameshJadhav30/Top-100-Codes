def remove_non_alphabets(s):
    return ''.join(ch for ch in s if ch.isalpha())

# Taking user input
s = input("Enter a string: ")
filtered_string = remove_non_alphabets(s)

print("String after removing non-alphabet characters:", filtered_string)
