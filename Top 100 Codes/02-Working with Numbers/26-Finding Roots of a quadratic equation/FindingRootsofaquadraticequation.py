import math

def findRoots(a, b, c):
    if a == 0:
        print("Invalid equation! 'a' cannot be zero.")
        return

    d = b * b - 4 * a * c
    sqrt_val = math.sqrt(abs(d))

    if d > 0:
        print("Roots are real and distinct:")
        print((-b + sqrt_val) / (2 * a))
        print((-b - sqrt_val) / (2 * a))
    elif d == 0:
        print("Roots are real and equal:")
        print(-b / (2 * a))
    else:  # d < 0
        real_part = -b / (2 * a)
        imaginary_part = sqrt_val / (2 * a)
        print("Roots are complex:")
        print(f"{real_part} + {imaginary_part}j")
        print(f"{real_part} - {imaginary_part}j")

# Example usage
a, b, c = 1, 4, 4
findRoots(a, b, c)
