# Take user input
n = int(input("Enter a number to check if it is an Abundant Number: "))

# Initialize sum with 1 since 1 is a divisor for all numbers
sum_of_divisors = 1

# Loop to find all proper divisors (excluding the number itself)
for i in range(2, n):
    if n % i == 0:  # Check if i is a divisor of n
        sum_of_divisors += i  # Add the divisor to the sum

# Check if the number is abundant
if sum_of_divisors > n:
    print(f"{n} is an Abundant Number.")
    print(f"The Abundance is: {sum_of_divisors - n}")
else:
    print(f"{n} is not an Abundant Number.")
