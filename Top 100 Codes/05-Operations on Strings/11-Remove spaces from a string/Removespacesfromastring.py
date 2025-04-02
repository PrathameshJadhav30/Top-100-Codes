def remove_spaces(s):
    result = ""
    for char in s:
        if char != " ":
            result += char
    return result

# Taking input from the user
input_str = input("Enter a string: ")
output_str = remove_spaces(input_str)

print("String without spaces:", output_str)
