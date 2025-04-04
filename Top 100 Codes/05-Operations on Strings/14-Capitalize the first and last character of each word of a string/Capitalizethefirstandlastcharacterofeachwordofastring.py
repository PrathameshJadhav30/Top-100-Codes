def capitalize_first_last(s):
    words = s.split()
    capitalized_words = []
    
    for word in words:
        if len(word) == 1:
            capitalized_words.append(word.upper())
        else:
            capitalized_word = word[0].upper() + word[1:-1] + word[-1].upper()
            capitalized_words.append(capitalized_word)
    
    return ' '.join(capitalized_words)

# Input from user
input_string = input("Enter a string: ")
result = capitalize_first_last(input_string)
print("Modified string:", result)
