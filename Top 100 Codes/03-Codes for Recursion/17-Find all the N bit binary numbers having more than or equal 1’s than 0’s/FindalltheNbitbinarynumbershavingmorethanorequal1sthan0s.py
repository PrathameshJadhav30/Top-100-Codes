def generate_binary(n, ones, zeros, current):
    """Recursive function to generate N-bit binary numbers with more 1's than 0's in all prefixes."""
    if len(current) == n:
        print(current)
        return

    # Add '1' to the current string and recurse
    generate_binary(n, ones + 1, zeros, current + "1")
    
    # Add '0' only if the number of 1's is greater than the number of 0's
    if ones > zeros:
        generate_binary(n, ones, zeros + 1, current + "0")

def print_n_bit_binary_numbers(n):
    """Function to initiate generation of N-bit binary numbers."""
    generate_binary(n, 0, 0, "")

# Take user input and call the function
n = int(input("Enter the value of N: "))
print("N-bit binary numbers having more 1's than 0's in all prefixes:")
print_n_bit_binary_numbers(n)
