# Prompt the user to input the range
low = int(input("Enter the lower limit: "))
high = int(input("Enter the upper limit: "))

# List to store prime numbers
primes = []

# Iterate through the range to find prime numbers
for num in range(low, high + 1):
    # Skip numbers less than 2 as they are not prime
    if num < 2:
        continue

    # Assume the number is prime
    is_prime = True

    # Check divisors from 2 to sqrt(num)
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            is_prime = False
            break

    # If the number is prime, add it to the list
    if is_prime:
        primes.append(num)

# Print the list of prime numbers
print(f"Prime numbers between {low} and {high}: {primes}")
