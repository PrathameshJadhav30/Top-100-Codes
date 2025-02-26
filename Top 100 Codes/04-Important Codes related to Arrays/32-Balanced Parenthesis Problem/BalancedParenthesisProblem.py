def is_balanced(s):
    while '()' in s or '{}' in s or '[]' in s:
        s = s.replace('()', '').replace('{}', '').replace('[]', '')
    return len(s) == 0

s = input("Enter a string of brackets: ")
print("Given string is balanced:", is_balanced(s))
