def count_decodings(digits, length):
    """
    Function to count possible decodings of a given digit sequence.

    :param digits: String representing the digit sequence
    :param length: Length of the digit sequence
    :return: Total number of possible decodings
    """

    # Edge case: If the sequence starts with '0', decoding is not possible
    if length == 0 or digits[0] == '0':
        return 0

    # Array to store decoding counts for substrings
    count = [0] * (length + 1)
    
    # Base cases
    count[0], count[1] = 1, 1

    for k in range(2, length + 1):
        count[k] = 0  # Initialize current position

        # If the last digit is not '0', carry over the previous count
        if digits[k - 1] > '0':
            count[k] = count[k - 1]

        # If the last two digits form a valid number (10-26), add the count from two steps back
        if digits[k - 2] == '1' or (digits[k - 2] == '2' and digits[k - 1] < '7'):
            count[k] += count[k - 2]

    return count[length]


# Take user input
digits = input("Enter the sequence: ")

# Display the result
print("Possible count of decodings:", count_decodings(digits, len(digits)))
