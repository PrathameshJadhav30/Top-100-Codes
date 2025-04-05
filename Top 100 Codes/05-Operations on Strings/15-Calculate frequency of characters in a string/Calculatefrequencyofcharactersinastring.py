# Take input from the user
string = input("Enter a string: ")

# Loop through each character in the string
for i in string:
    frequency = string.count(i)
    print(str(i) + ": " + str(frequency), end=", ")
