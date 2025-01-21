# Method to print the divisors of a given number
def printDivisors(n):
    print(f"The divisors of {n} are: ", end="")
    i = 1
    while i <= n:
        if n % i == 0:
            print(i, end=" ")
        i += 1
    print()  # Move to a new line after printing all divisors

# Main program to take user input and find divisors
num = int(input("Enter a number to find its divisors: "))

# Validate input to ensure it's a positive number
if num <= 0:
    print("Please enter a positive integer.")
else:
    printDivisors(num)
