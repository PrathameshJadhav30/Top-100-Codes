def convert(hex):
    # Get the length of the hexadecimal string
    l = len(hex)
    decimal = 0  # Initialize decimal value
    pos = 0  # Position variable for powers of 16
    
    # Iterate through each character in the hexadecimal string from right to left
    for i in range(l - 1, -1, -1):
        # If the character is a digit ('0' - '9')
        if '0' <= hex[i] <= '9':
            # Convert the character to its integer value
            digit = int(hex[i])
            # Add the value to the decimal, multiplied by the appropriate power of 16
            decimal += digit * pow(16, pos)
            pos += 1

        # If the character is a letter ('A' - 'F')
        elif 'A' <= hex[i] <= 'F':
            # Convert the letter to its corresponding integer value
            # ASCII value of 'A' is 65, so we subtract 55 to get 10 for 'A', 11 for 'B', etc.
            digit = ord(hex[i]) - 55
            # Add the value to the decimal, multiplied by the appropriate power of 16
            decimal += digit * pow(16, pos)
            pos += 1

    # Return the computed decimal value
    return decimal


# Example usage
hex = "C9"  # Hexadecimal input
print("Decimal value of", hex, "is", convert(hex))
