def toggle_string(s):
    toggled = ""
    for i in range(len(s)):
        if 'a' <= s[i] <= 'z':
            toggled += chr(ord(s[i]) - 32) # Lowercase to uppercase
        elif 'A' <= s[i] <= 'Z':
            toggled += chr(ord(s[i]) + 32) # Uppercase to lowercase
        else:
            toggled += s[i] # Special characters
    return toggled

input_str = input("Enter a String: ")
print("Toggled string: ", toggle_string(input_str))