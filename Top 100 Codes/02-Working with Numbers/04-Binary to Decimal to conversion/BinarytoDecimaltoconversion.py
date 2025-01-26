# Input: binary number as a string
binary_number = input("Enter a binary number: ")

try:
    # Convert binary to decimal using int() with base 2
    decimal_number = int(binary_number, 2)
    print(f"Decimal value: {decimal_number}")
except ValueError:
    print("Error: Invalid binary number. Please enter only 0s and 1s.")
