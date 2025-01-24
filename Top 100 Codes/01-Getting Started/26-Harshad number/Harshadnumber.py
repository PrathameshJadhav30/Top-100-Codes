# Function to check if a number is a Harshad (Niven) number
def is_harshad_number(num):
    # Store the original number
    original_num = num
    # Initialize the sum of digits
    digit_sum = 0

    # Calculate the sum of digits
    while num > 0:
        digit_sum += num % 10  # Add the last digit to the sum
        num //= 10            # Remove the last digit

    # Check if the original number is divisible by the sum of its digits
    return original_num % digit_sum == 0

# Take user input
n = int(input("Enter a number to check if it is a Harshad number: "))

# Check and print the result
if is_harshad_number(n):
    print(f"{n} is a Harshad number.")
else:
    print(f"{n} is not a Harshad number.")
