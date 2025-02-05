def term(calculated, current, N):
    cur = 1

    # Base case: Stop when current exceeds N
    if current == N + 1:
        return 0

    # Calculate product of `current` consecutive integers starting from `calculated`
    for i in range(calculated, calculated + current):
        cur *= i

    # Recursive call with updated values
    return cur + term(i, current + 1, N)

# Driver code
N = int(input("Enter the value of N: "))
result = term(1, 1, N)
print("Result:", result)
