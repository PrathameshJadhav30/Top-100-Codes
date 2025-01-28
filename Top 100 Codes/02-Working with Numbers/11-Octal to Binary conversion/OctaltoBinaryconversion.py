def convert(octal):
    """
    Converts an octal number to binary by first converting to decimal
    and then to binary.
    """
    # Step 1: Convert octal to decimal
    i = 0
    decimal = 0
    while octal != 0:
        digit = octal % 10  # Extract the last digit
        decimal += digit * pow(8, i)  # Add the digit multiplied by 8^i
        octal //= 10  # Remove the last digit
        i += 1  # Increment the power

    # Display the intermediate decimal value
    print("Decimal Value:", decimal)

    # Step 2: Convert decimal to binary
    binary = 0
    i = 1  # Position multiplier for binary number
    while decimal != 0:
        rem = decimal % 2  # Get the remainder (binary digit)
        decimal //= 2  # Divide by 2 for the next digit
        binary += rem * i  # Add the binary digit to the result
        i *= 10  # Move to the next binary position (units -> tens)

    # Display the binary value
    print("Binary Value:", binary)


# Take user input for the octal number
octal = int(input("Enter an octal number: "))
convert(octal)
