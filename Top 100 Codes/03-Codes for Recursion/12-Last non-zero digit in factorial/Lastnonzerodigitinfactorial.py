def last_non_zero_digit(n):
    result = 1
    for i in range(1, n + 1):
        result *= i

        # Remove trailing zeros by dividing by 10
        while result % 10 == 0:
            result //= 10

        # Keep only the last 5 digits to prevent overflow
        result %= 100000

    # Return the last non-zero digit
    return result % 10

# Input
n = int(input("Enter a number: "))
last_digit = last_non_zero_digit(n)
print(f"The last non-zero digit in {n}! is: {last_digit}")
