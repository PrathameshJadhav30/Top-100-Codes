def getSum(num):
    if num == 1:  # Base case: if num is 1, return 1
        return 1
    return num + getSum(num - 1)  # Recursive case: add num to the result of getSum(num - 1)

# Take input from the user
num = int(input("Enter a positive integer: "))

if num < 1:
    print("Please enter a positive integer.")
else:
    print(f"The sum of the first {num} natural numbers is: {getSum(num)}")
