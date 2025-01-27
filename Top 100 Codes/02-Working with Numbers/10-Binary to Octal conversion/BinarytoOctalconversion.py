# Function to convert binary to octal
def convert(num):
    octalDigit = 0  # Temporary variable to store current octal digit
    count = 1        # Count variable to track groups of 3 bits
    i = 0            # Bit position within a group of 3 bits
    pos = 0          # Position in the octal array
    octalArray = [0] * 32  # Array to store octal digits (maximum 32 digits)

    while num != 0:
        # Extract the least significant bit from binary number
        digit = num % 10
        octalDigit += digit * pow(2, i)  # Add the bit to the current octal digit
        i += 1
        num //= 10  # Remove the least significant binary digit

        # Place the current octal sum for the group of 3 bits in the array
        octalArray[pos] = octalDigit

        # Whenever we've read 3 digits, reset and move to the next group
        if count % 3 == 0:
            octalDigit = 0  # Reset for next group
            i = 0           # Reset bit position
            pos += 1        # Move to the next position in the octal array

        count += 1  # Increment bit count

    # Print the octal digits in reverse order
    for j in range(pos, -1, -1):
        print(octalArray[j], end='')

# Example binary number
binary = 10101111
convert(binary)
