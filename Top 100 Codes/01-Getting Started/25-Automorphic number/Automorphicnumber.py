# Take user input for the number
num = int(input("Enter a number: "))

# Convert the number to a string
num_str = str(num)

# Calculate the square of the number and convert it to a string
square = num ** 2
square_str = str(square)

# Check if the square ends with the original number
if square_str.endswith(num_str):
    print(f"{num} is an Automorphic Number (Square: {square})")
else:
    print(f"{num} is not an Automorphic Number (Square: {square})")
