s = {10, 10, 20, 30, 30, 30, 40}  # Using a set to remove duplicates

s = sorted(s)  # Convert set to a sorted list (optional, if you need ordered output)

for i in range(len(s)):  # Using a normal for loop
    print(s[i], end=" ")
