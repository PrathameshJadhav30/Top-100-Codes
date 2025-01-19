def find_sum(num):
    """
    Recursively calculates the sum of the digits of a given number.
    
    Args:
        num (int): The number whose digits are to be summed up.
    
    Returns:
        int: The sum of the digits.
    """
    if num == 0:
        return 0
    # Add the last digit to the sum of the remaining digits
    return num % 10 + find_sum(num // 10)


# Get user input
num = int(input("Enter a number: "))

# Validate that the number is non-negative
if num < 0:
    print("Please enter a non-negative number.")
else:
    # Calculate and display the sum of digits
    print(f"The sum of the digits of {num} is: {find_sum(num)}")
