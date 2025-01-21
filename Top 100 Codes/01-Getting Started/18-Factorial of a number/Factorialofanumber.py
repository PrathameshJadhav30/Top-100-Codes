# Initialize the number for which we want to calculate the factorial
num = 6
fact = 1

# Check if the number is negative
if num < 0:
    # Factorial of a negative number is not defined
    print("Factorial of a negative number is not possible.")
else:
    # Calculate factorial using a loop
    for i in range(1, num + 1):
        fact *= i  # Multiply fact with the current number

    # Print the result
    print("Factorial of", num, "is", fact)

# Time Complexity: O(N) - Loop runs N times
# Space Complexity: O(1) - Constant space is used
