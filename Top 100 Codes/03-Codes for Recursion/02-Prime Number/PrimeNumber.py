import math

def is_prime(n):
    if n < 2:  # Handle cases for 0 and 1
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

# Taking user input
n = int(input("Enter a number: "))

# Checking and displaying result using if-else
if is_prime(n):
    print(f"{n} is a Prime Number")
else:
    print(f"{n} is Not a Prime Number")
