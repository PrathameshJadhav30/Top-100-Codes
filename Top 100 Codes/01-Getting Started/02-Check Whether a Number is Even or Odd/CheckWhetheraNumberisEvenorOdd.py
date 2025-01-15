# Prompt the user to enter a number
num = int(input("Enter a number: "))  # Convert the input to an integer

# Use a single-line conditional expression to check if the number is even or odd
# If the number is divisible by 2 (remainder is 0), print "Even"
# Otherwise, print "Odd"
print("Even") if num % 2 == 0 else print("Odd")
