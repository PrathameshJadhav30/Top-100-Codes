# Prompt the user to input a year
year = int(input("Enter a year: "))

# Check if the year is a leap year
if (year % 400 == 0) or (year % 4 == 0 and year % 100 != 0):
    print(f"{year} is a Leap Year.")
else:
    print(f"{year} is Not a Leap Year.")
