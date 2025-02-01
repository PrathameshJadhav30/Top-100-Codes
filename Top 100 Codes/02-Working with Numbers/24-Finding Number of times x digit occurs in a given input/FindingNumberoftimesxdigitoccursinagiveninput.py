# Take user input for the number and digit
number_input = input("Enter a number: ")
digit_input = input("Enter a digit: ")

# Convert inputs to strings (they are already strings from input())
# but this step makes it clear we're working with string data
number_str = str(number_input)
digit_str = str(digit_input)

# Count the occurrences of the digit in the number
occurrence = number_str.count(digit_str)

# Print the result
print(f"The digit {digit_str} occurs {occurrence} time(s) in the number {number_str}.")
