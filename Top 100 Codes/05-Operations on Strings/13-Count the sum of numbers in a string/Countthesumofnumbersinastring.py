def sum_of_numbers_in_string(s):
    total_sum = 0
    num = 0

    for ch in s:
        if ch.isdigit():
            num = num * 10 + int(ch)  # Form the number
        else:
            total_sum += num  # Add the formed number to sum
            num = 0  # Reset for next number

    total_sum += num  # Add the last number (if any)
    return total_sum

# Driver code
input_string = input("Enter a string: ")
print("Sum of numbers in the string:", sum_of_numbers_in_string(input_string))
