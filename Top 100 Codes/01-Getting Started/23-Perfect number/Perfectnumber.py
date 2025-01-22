# Prompt the user to enter a number
n = int(input("Enter a number to check if it is a Perfect number: "))
sum_of_divisors = 0  # Initialize the sum of divisors to 0

# Loop through numbers from 1 to n-1 to find all divisors
for i in range(1, n):
    if n % i == 0:  # Check if 'i' is a divisor of 'n'
        sum_of_divisors += i  # Add the divisor to the sum

# Check if the sum of divisors equals the number itself
if sum_of_divisors == n:
    print(f"{n} is a Perfect number.")
else:
    print(f"{n} is not a Perfect number.")
