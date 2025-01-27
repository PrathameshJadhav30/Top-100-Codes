def convertBinary(num):
    """
    Converts a decimal number to its binary representation.

    Args:
        num (int): The decimal number to convert.

    Returns:
        int: The binary representation of the number.
    """
    # Initialize binary result and positional multiplier
    binary = 0
    position_multiplier = 1

    # Loop until the number becomes 0
    while num != 0:
        # Get the remainder (0 or 1) when dividing by 2
        remainder = num % 2

        # Update the binary representation
        binary += remainder * position_multiplier

        # Move to the next higher binary place
        position_multiplier *= 10

        # Update the number by dividing it by 2
        num //= 2

    return binary


# Input decimal number
decimal_num = 21

# Print the binary representation
print(f"Binary of {decimal_num} is: {convertBinary(decimal_num)}")
