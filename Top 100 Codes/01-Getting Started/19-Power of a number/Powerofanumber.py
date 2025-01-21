# Prompt the user for the base number and the power
num = int(input("Enter the base number: "))
power = int(input("Enter the power: "))

# Calculate the result using the built-in pow() function
result = pow(num, power)

# Display the result
print(f"{num} raised to the power {power} is: {result}")

# Notes:
# - The pow() function efficiently calculates num^power.
# - It works for both positive and negative values of num and power.
