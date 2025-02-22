# Predefined array
arr = [12, 7, 9, 20, 33, 40, 55, 68]

# Count even and odd numbers
even_count = sum(1 for num in arr if num % 2 == 0)
odd_count = len(arr) - even_count

# Print results
print("Number of even elements:", even_count)
print("Number of odd elements:", odd_count)
