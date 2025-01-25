# Function to calculate LCM directly
def calculate_lcm(a, b):
    greater = max(a, b)
    lcm = greater

    # Find the smallest multiple of the greater number that is divisible by the other number
    while lcm % a != 0 or lcm % b != 0:
        lcm += greater
    return lcm

# Prompt the user to enter two numbers
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))

# Call the calculate_lcm function to compute the LCM
lcm = calculate_lcm(num1, num2)

# Output the result to the user
print(f"The LCM of {num1} and {num2} is: {lcm}")
