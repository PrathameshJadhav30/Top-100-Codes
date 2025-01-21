# Function to find the prime factors of a number using recursion
def Prime_Factorial(n, arr):
    # If the number is less than 4, it's either prime or 1
    if n < 4:
        arr.append(n)
        return arr

    # Iterate from 2 to half of the number
    for i in range(2, 1 + n // 2):
        # If we reach the middle of the range without finding factors, 'n' is prime
        if i == (1 + n // 2):
            arr.append(n)
            return arr

        # If 'i' divides 'n', it's a factor
        if n % i == 0:
            arr.append(i)  # Append the factor to the list
            n = n // i    # Divide 'n' by the factor
            return Prime_Factorial(n, arr)  # Recursively find the factors

    return arr

# Main program to take user input
n = int(input("Enter a number to find its prime factors: "))
arr = []  # List to store the prime factors

# Validate input to ensure it's positive
if n <= 0:
    print("Please enter a positive integer.")
else:
    # Find and display the prime factors
    factors = Prime_Factorial(n, arr)
    print(f"Prime factors of {n} are: {factors}")
