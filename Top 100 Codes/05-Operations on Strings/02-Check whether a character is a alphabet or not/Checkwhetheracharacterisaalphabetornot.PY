# Take user input
ch = input("Enter a character: ")

# Check if the input is a single character
if len(ch) == 1 and ch.isalpha():
    print(f"The character '{ch}' is an Alphabet.")
else:
    print(f"The character '{ch}' is not an Alphabet.")
