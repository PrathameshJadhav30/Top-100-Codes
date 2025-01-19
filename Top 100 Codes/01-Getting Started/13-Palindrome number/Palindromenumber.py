# Prompt the user to enter a number
num = int(input("Enter a number: "))

# Reverse the number by converting it to a string and slicing
reverse = int(str(num)[::-1])

# Check if the number is a palindrome
if num == reverse:
    print(f"{num} is a Palindrome.")
else:
    print(f"{num} is not a Palindrome.")
