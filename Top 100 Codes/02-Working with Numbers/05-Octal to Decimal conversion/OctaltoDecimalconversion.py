# Input: Octal number as a string
octal_number = input("Enter an octal number: ")

try:
    # Convert the octal number (base 8) to a decimal integer
    decimal_value = int(octal_number, 8)
    print(f"Decimal value: {decimal_value}")
except ValueError:
    # Handle invalid input (non-octal digits or invalid format)
    print("Error: Invalid octal number. Digits must be between 0 and 7.")
