# Prompt the user to input a number
num = int(input("Enter a number: "))  # Convert the input to an integer

# Check if the number is greater than or equal to zero
if num >= 0:
    # If the number is equal to zero
    if num == 0:
        print('Zero')  # Print "Zero" for the number 0
    else:
        print("Positive")  # Print "Positive" for numbers greater than 0
else:
    print("Negative")  # Print "Negative" for numbers less than 0
