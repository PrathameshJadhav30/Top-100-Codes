# Prompt the user to input a number
num = int(input("Enter a number: "))

# Check if the number is prime
if num <= 1:
    print(f"{num} is not a Prime Number.")
else:
    is_prime = True

    # Check divisors from 2 to the square root of num
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            is_prime = False
            break

    # Output the result
    if is_prime:
        print(f"{num} is a Prime Number.")
    else:
        print(f"{num} is not a Prime Number.")
