import math

# Function to check if a number is a perfect square
def check_perfect_square(x):
    # Check if the square root of x is an integer
    if math.ceil(math.sqrt(x)) == math.floor(math.sqrt(x)):
        print("True")  # The number is a perfect square
    else:
        print("False")  # The number is not a perfect square

# Take user input for the number
n = int(input("Enter a number: "))

# Check if the entered number is a perfect square
check_perfect_square(n)
