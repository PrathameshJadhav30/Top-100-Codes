def findGCD(a, b):
    """
    Function to find the Greatest Common Divisor (GCD) using an iterative approach.
    """
    gcd = 1
    for i in range(1, min(a, b) + 1):
        if a % i == 0 and b % i == 0:
            gcd = i
    return gcd


# Taking user input for the first fraction
num1, den1 = map(int, input("Enter numerator and denominator of first fraction (separated by space): ").split())

# Taking user input for the second fraction
num2, den2 = map(int, input("Enter numerator and denominator of second fraction (separated by space): ").split())

# Finding the Least Common Multiple (LCM) of the denominators
lcm = (den1 * den2) // findGCD(den1, den2)

# Computing the sum of fractions by making denominators equal
numerator_sum = (num1 * (lcm // den1)) + (num2 * (lcm // den2))

# Simplifying the resulting fraction
gcd_result = findGCD(numerator_sum, lcm)
simplified_numerator = numerator_sum // gcd_result
simplified_denominator = lcm // gcd_result

# Displaying the result
print(f"{num1}/{den1} + {num2}/{den2} = {simplified_numerator}/{simplified_denominator}")
