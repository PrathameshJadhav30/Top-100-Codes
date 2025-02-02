def power(a, b):
    if b == 0:  # Base condition
        return 1
    return a * power(a, b - 1)

# Taking user input
a = int(input("Enter base: "))
b = int(input("Enter exponent: "))

# Displaying result
print(f"{a} to the power {b} is {power(a, b)}")
