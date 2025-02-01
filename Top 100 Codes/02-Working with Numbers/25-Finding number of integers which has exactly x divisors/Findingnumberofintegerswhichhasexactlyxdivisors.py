import math

def count_divisors(num):
    """Return the number of divisors of num."""
    count = 0
    limit = int(math.sqrt(num))
    for i in range(1, limit + 1):
        if num % i == 0:
            # If i is the square root of num, count it only once
            if i == num // i:
                count += 1
            else:
                count += 2
    return count

# Take user input for n and x
n = int(input("Enter the upper bound (n): "))
x = int(input("Enter the number of divisors (x): "))

count_numbers = 0
# Check each number from 1 to n
for i in range(1, n + 1):
    if count_divisors(i) == x:
        count_numbers += 1

# Output the result
print(f"The number of integers between 1 and {n} with exactly {x} divisors is: {count_numbers}")
