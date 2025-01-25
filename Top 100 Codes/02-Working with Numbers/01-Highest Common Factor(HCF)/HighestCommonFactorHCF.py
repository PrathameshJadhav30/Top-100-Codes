# Function to calculate HCF using the Euclidean algorithm
def calculate_hcf(a, b):
    while b != 0:  # Continue until the remainder becomes 0
        a, b = b, a % b  # Update 'a' to 'b' and 'b' to the remainder
    return a  # 'a' now contains the HCF

# Prompt the user to enter two numbers
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))

# Call the calculate_hcf function to compute the HCF
hcf = calculate_hcf(num1, num2)

# Output the result to the user
print(f"The HCF of {num1} and {num2} is: {hcf}")
