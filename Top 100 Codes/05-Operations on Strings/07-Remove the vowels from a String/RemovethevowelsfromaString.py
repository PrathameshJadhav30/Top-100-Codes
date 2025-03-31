import re

def remove_vowels(s):
    return re.sub(r"[aeiouAEIOU]", "", s)

# Taking user input
string = input("Enter a string: ")
print("String after removing vowels:", remove_vowels(string))
