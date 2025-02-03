def hcf(a, b):
    """
    Recursive function to find the HCF (GCD) of two numbers.

    :param a: First number
    :param b: Second number
    :return: Highest Common Factor (HCF) of a and b
    """
    # Base case: If one number becomes 0, return the other number
    if b == 0:
        return a

    # Recursive case: HCF(a, b) = HCF(b, a % b) (Euclidean Algorithm)
    return hcf(b, a % b)


# Example usage
num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

# Find and print the HCF
print(f"HCF of {num1} and {num2} is {hcf(num1, num2)}")
