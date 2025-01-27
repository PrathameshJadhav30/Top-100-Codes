def convert_to_hexadecimal(num):
    """
    Converts a decimal number to its hexadecimal representation.
    
    Args:
        num (int): The decimal number to convert.
    
    Returns:
        str: The hexadecimal representation of the number.
    """
    hexa = []  # List to store hexadecimal digits

    # Loop until the number becomes 0
    while num != 0:
        # Get the remainder when dividing by 16
        remainder = num % 16

        # Convert remainder to a hexadecimal character
        if remainder < 10:
            # For digits 0-9
            hexa.append(chr(remainder + 48))  # ASCII '0' starts at 48
        else:
            # For letters A-F
            hexa.append(chr(remainder + 55))  # ASCII 'A' starts at 65

        # Update the number by dividing by 16
        num //= 16

    # Reverse the list to get the correct hexadecimal order
    hexa.reverse()

    # Join the list into a string and return
    return ''.join(hexa)


# Prompt the user for input
decimal_num = int(input("Enter a decimal number: "))

# Convert the decimal number to hexadecimal and display the result
hexadecimal = convert_to_hexadecimal(decimal_num)
print(f"Hexadecimal representation of {decimal_num} is: {hexadecimal}")
