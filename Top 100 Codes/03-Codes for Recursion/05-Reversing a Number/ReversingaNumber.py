# Prompt the user for input
num = int(input("Enter a number: "))

# Validate that the number is non-negative
if num < 0:
    print("Please enter a non-negative number.")
else:
    # Reverse the number by converting it to a string and slicing
    reversed_num = str(num)[::-1]
    
    # Display the reversed number
    print(f"The reverse of {num} is: {reversed_num}")
