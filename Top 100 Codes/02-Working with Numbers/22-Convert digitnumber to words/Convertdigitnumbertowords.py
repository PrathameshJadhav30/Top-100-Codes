from num2words import num2words

number = int(input("Enter a number: "))

# Convert number to words
print("Number in words:", num2words(number))

# Convert number to ordinal (e.g., 1st, 2nd, 3rd)
print("Ordinal form:", num2words(number, to='ordinal'))
