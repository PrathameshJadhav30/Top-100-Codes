def find_non_repeating_characters(s):
    freq = {}

    # Count frequency of each character
    for i in range(len(s)):
        char = s[i]
        freq[char] = freq.get(char, 0) + 1

    print("Non-repeating characters:", end=" ")
    found = False
    for i in range(len(s)):
        if freq[s[i]] == 1:
            print(s[i], end=" ")
            found = True

    if not found:
        print("None")

# Input
input_str = input("Enter a string: ")
find_non_repeating_characters(input_str)
