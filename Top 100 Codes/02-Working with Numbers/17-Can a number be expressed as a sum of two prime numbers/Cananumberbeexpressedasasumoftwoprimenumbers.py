def is_prime(num):
    if num <= 1:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def check_sum_of_two_primes(n):
    found = False
    for i in range(2, n // 2 + 1):
        if is_prime(i) and is_prime(n - i):
            print(f"{n} can be expressed as the sum of {i} and {n - i}")
            found = True
    if not found:
        print(f"{n} cannot be expressed as the sum of two prime numbers.")

# Taking user input
num = int(input("Insert the num: "))
check_sum_of_two_primes(num)
