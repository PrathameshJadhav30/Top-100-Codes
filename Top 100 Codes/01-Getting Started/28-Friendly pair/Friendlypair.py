# Function to calculate the sum of proper divisors of a number
def printDivisors(n, factors):
    i = 1
    while i <= n:
        if n % i == 0:  # Check if i is a divisor of n
            factors.append(i)
        i += 1
    # Return the sum of divisors excluding the number itself
    return sum(factors) - n

# Take user input for two numbers
number1 = int(input("Enter the first number: "))
number2 = int(input("Enter the second number: "))

# Check if the numbers form a friendly pair
if int(printDivisors(number1, []) / number1) == int(printDivisors(number2, []) / number2):
    print(f"{number1} and {number2} are Friendly Pairs.")
else:
    print(f"{number1} and {number2} are not Friendly Pairs.")
