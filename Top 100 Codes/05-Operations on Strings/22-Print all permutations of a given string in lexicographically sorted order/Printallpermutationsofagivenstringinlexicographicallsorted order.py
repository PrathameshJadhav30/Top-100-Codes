from itertools import permutations

def print_permutations(s):
    # Generate all permutations and convert to set to remove duplicates (if any)
    perm = sorted(set([''.join(p) for p in permutations(s)]))
    
    # Print each permutation
    for p in perm:
        print(p)

# Input from user
s = input("Enter a string: ")
print("All lexicographically sorted permutations:")
print_permutations(s)
