# Function to check if a number is an Armstrong number
def is_armstrong(number):
    """
    Checks whether the given number is an Armstrong number.
    
    An Armstrong number (or Narcissistic number) is a number that is equal to
    the sum of its own digits raised to the power of the number of digits.
    
    Args:
        number (int): The number to check.
    
    Returns:
        bool: True if the number is an Armstrong number, False otherwise.
    """
    # Convert the number to a string to calculate the number of digits
    num_str = str(number)
    num_digits = len(num_str)
    
    # Calculate the sum of the digits raised to the power of num_digits
    armstrong_sum = sum(int(digit) ** num_digits for digit in num_str)
    
    # Check if the sum is equal to the original number
    return armstrong_sum == number

# Prompt the user to enter a number
num = int(input("Enter a number: "))

# Check if the input number is an Armstrong number and display the result
if is_armstrong(num):
    print(f"{num} is an Armstrong number.")
else:
    print(f"{num} is not an Armstrong number.")
