# Function to calculate factorial of a number
def factorial(num):
    fact = 1
    for i in range(num, 1, -1):  # Loop from num down to 2
        fact *= i  # Multiply each number to calculate factorial
    return fact  # Return the calculated factorial


# Main program
# User input for the number of people (n) and seats (r)
n = int(input("Enter the number of people (n): "))
r = int(input("Enter the number of seats (r): "))

# Check if the input is valid (n >= r)
if n < r:
    print("Error: Number of people (n) must be greater than or equal to the number of seats (r).")
else:
    # Calculate permutations using the formula P(n, r) = n! / (n - r)!
    permutations = factorial(n) // factorial(n - r)

    # Print the result
    print("Total possible arrangements:", permutations)
