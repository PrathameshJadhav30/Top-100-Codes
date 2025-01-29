# Program to calculate the maximum number of handshakes

# Take user input for the number of people
N = int(input("Enter the number of people: "))

# Ensure the input is non-negative
if N < 0:
    print("Number of people cannot be negative.")
else:
    # Calculate the number of handshakes using the formula: nC2 = n * (n - 1) / 2
    no_of_handshakes = int(N * (N - 1) / 2)

    # Print the result
    print(f"Maximum number of handshakes possible for {N} people is {no_of_handshakes}.")
