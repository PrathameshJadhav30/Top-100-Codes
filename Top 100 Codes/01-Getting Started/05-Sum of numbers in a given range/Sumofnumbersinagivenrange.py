# Recursive function to calculate the sum of numbers from num1 to num2
def recursum(sum, num1, num2):
    # Base case: if num1 exceeds num2, return the accumulated sum
    if num1 > num2:
        return sum
    # Recursive case: add num1 to the result of the next recursive call
    return num1 + recursum(sum, num1 + 1, num2)

# Take input from the user for the range
num1 = int(input("Enter the starting number (num1): "))
num2 = int(input("Enter the ending number (num2): "))

# Ensure the starting number is less than or equal to the ending number
if num1 > num2:
    print("Invalid input. Starting number must be less than or equal to the ending number.")
else:
    # Initialize the sum as 0 and call the recursive function
    sum = 0
    result = recursum(sum, num1, num2)
    print(f"The sum of numbers from {num1} to {num2} is: {result}")
