# Function to calculate the factorial of a number using recursion
def factorial(num):
    if num <= 0:  # Base case: 0! = 1! = 1
        return 1
    else:
        return num * factorial(num - 1)  # Recursive call

# Recursive function to calculate the sum of factorials of digits
def check_strong_number(num):
    # Base case: if number becomes 0, return 0 to stop recursion
    if num == 0:
        return 0
    
    # Calculate factorial of the last digit
    digit = num % 10
    fact = factorial(digit)
    
    # Recursive call for the remaining digits and add the current factorial
    return fact + check_strong_number(num // 10)

# Take user input for the number
num = int(input("Enter a number to check if it's a Strong Number: "))

# Check if the number is a strong number
if check_strong_number(num) == num:
    print(f"Yes, {num} is a Strong Number.")
else:
    print(f"No, {num} is not a Strong Number.")
