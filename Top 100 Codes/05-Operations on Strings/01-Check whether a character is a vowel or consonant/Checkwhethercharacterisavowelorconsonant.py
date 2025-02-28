def check_character(ch):
    # Convert the character to lowercase for uniform comparison
    ch = ch.lower()

    if ch in ('a', 'e', 'i', 'o', 'u'):
        print(f"{ch} is a vowel.")
    elif 'a' <= ch <= 'z':  # Check if it's an alphabet character
        print(f"{ch} is a consonant.")
    else:
        print("Invalid input. Please enter an alphabetic character.")

# Taking user input
ch = input("Enter a character: ")

# Ensuring input is a single character
if len(ch) == 1:
    check_character(ch)
else:
    print("Please enter a single character.")
