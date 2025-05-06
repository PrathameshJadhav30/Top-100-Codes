def factorial(n):
    result = 1
    for i in range(2, n + 1):
        result *= i
    return result

# Input from user
num = int(input("Enter a number: "))
fact = factorial(num)
print(f"Factorial of {num} is:\n{fact}")
