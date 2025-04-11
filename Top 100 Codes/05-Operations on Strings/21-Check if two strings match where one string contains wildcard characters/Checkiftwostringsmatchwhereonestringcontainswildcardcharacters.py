import fnmatch

def is_match(wild_pattern, string):
    return fnmatch.fnmatch(string, wild_pattern)

# Example usage
pattern = "a*b?d"
text = "axybcd"

if is_match(pattern, text):
    print("Matched ")
else:
    print("Not Matched ")
