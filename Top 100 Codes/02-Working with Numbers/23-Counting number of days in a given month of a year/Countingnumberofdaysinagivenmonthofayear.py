def get_days_in_month(month, year):
    days_in_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    
    # Check for leap year (February has 29 days in a leap year)
    if month == 2 and (year % 400 == 0 or (year % 100 != 0 and year % 4 == 0)):
        return 29
    
    return days_in_month[month - 1]

# Take user input
month = int(input("Enter month (1-12): "))
year = int(input("Enter year: "))

# Validate input
if 1 <= month <= 12 and year > 0:
    print("Number of days:", get_days_in_month(month, year))
else:
    print("Invalid input! Please enter a valid month (1-12) and a positive year.")
