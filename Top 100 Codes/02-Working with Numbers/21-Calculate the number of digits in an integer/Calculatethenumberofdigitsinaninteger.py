import math

# Taking user input
n = int(input("Enter a number: "))

# Handling zero case explicitly
if n == 0:
    digit = 1
else:
    # Calculating number of digits using log10
    digit = math.floor(math.log10(abs(n)) + 1)

# Displaying the result
print("Number of digits:", digit)
