# Take user input and convert it to an integer
val = int(input("Enter number: "))

# Convert the integer to a string for easy manipulation
val = str(val)

# Replace all occurrences of '0' with '1'
replaced = val.replace('0', '1')

# Display the converted number
print("Converted number is: " + replaced)
