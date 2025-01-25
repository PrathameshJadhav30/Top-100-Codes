# Function to calculate the Greatest Common Divisor (GCD) of two integers
def gcd(a, b):
    # Continue the loop until one of the numbers becomes zero
    while b != 0:
        remainder = a % b  # Find the remainder when 'a' is divided by 'b'
        a = b              # Assign the value of 'b' to 'a'
        b = remainder      # Assign the remainder to 'b'
    return a  # 'a' contains the GCD when 'b' becomes zero

# Input two numbers from the user
num1 = int(input("Enter first integer: "))
num2 = int(input("Enter second integer: "))

# Output the GCD of the two numbers
print(f"The GCD of {num1} and {num2} is {gcd(num1, num2)}")
