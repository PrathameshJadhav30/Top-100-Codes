# Function to check if a number is an Armstrong number
def is_armstrong(num):
    """
    Checks whether the given number is an Armstrong number.
    An Armstrong number is a number that is equal to the sum of its digits
    raised to the power of the number of digits.
    """
    num_str = str(num)  # Convert the number to a string
    num_digits = len(num_str)  # Find the number of digits
    armstrong_sum = sum(int(digit) ** num_digits for digit in num_str)  # Sum of powered digits
    return armstrong_sum == num  # Check if sum equals the original number

# Prompt the user for the range
start = int(input("Enter the start of the range: "))
end = int(input("Enter the end of the range: "))

# Validate the range
if start > end:
    print("Invalid range! The start must be less than or equal to the end.")
else:
    print(f"Armstrong numbers between {start} and {end} are:")

    # Find and print all Armstrong numbers in the range
    found = False
    for num in range(start, end + 1):
        if is_armstrong(num):
            print(num, end=" ")
            found = True

    # If no Armstrong numbers are found
    if not found:
        print("None")
    else:
        print()  # Print a newline for better formatting
