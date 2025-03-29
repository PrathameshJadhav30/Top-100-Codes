# Write a Python program to read a string and find the number of vowels in it

def is_vowel(ch):
    """Function to check if a character is a vowel (case insensitive)"""
    return ch.lower() in 'aeiou'

def count_vowels(s):
    """Function to count the number of vowels in a string"""
    vowel_count = 0
    
    # Using a normal for loop
    for i in range(len(s)):
        if is_vowel(s[i]):
            vowel_count += 1
    
    return vowel_count

# Taking user input
input_string = input("Enter a string: ")

# Counting vowels
vowel_count = count_vowels(input_string)

# Displaying the result
print("Number of vowels in the string:", vowel_count)
