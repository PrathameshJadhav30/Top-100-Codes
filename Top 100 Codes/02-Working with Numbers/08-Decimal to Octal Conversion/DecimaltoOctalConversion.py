# Function to convert a decimal number to its octal representation
def convert_to_octal(decimal):
    """
    Converts a decimal number to octal.
    
    Args:
        decimal (int): The decimal number to convert.
    
    Returns:
        int: The octal representation of the number.
    """
    octal = 0  # Variable to store the octal number
    position_multiplier = 1  # Multiplier for positional value in octal

    # Loop until the decimal number becomes 0
    while decimal > 0:
        # Get the remainder when dividing by 8
        remainder = decimal % 8

        # Update the octal number
        octal += remainder * position_multiplier

        # Move to the next positional multiplier (units -> tens -> hundreds, etc.)
        position_multiplier *= 10

        # Update the decimal number by dividing by 8
        decimal //= 8

    return octal


# Prompt the user for input
decimal_num = int(input("Enter a decimal number: "))

# Convert the decimal number to octal and display the result
octal_num = convert_to_octal(decimal_num)
print(f"The octal representation of {decimal_num} is: {octal_num}")
