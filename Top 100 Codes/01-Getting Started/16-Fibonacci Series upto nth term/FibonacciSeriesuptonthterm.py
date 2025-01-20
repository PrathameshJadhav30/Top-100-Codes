import math

# Function to generate and print the Fibonacci series using Binet's formula
def fibonacci_series(phi, n):
    """
    Prints the first n Fibonacci numbers using the golden ratio (phi).
    
    Args:
    phi (float): The golden ratio.
    n (int): The number of terms to generate.
    """
    for i in range(n + 1):
        # Calculate the Fibonacci number using Binet's formula
        result = round(pow(phi, i) / math.sqrt(5))
        print(result, end=" ")

# Prompt the user for input
try:
    num = int(input("Enter the number of Fibonacci terms to display: "))
    if num < 0:
        print("Please enter a non-negative integer.")
    else:
        # Calculate the golden ratio
        phi = (1 + math.sqrt(5)) / 2
        print("Fibonacci series:")
        fibonacci_series(phi, num)
except ValueError:
    print("Invalid input! Please enter an integer.")
