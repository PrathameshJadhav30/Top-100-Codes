def remove_brackets(expression):
    stack = [1]  # Stack to track signs, assume the first sign is positive
    sign = 1  # Current sign effect
    result = ""

    i = 0
    while i < len(expression):
        if expression[i] == '+':
            result += '+' if sign == 1 else '-'
        elif expression[i] == '-':
            result += '-' if sign == 1 else '+'
        elif expression[i] == '(':
            if i > 0 and expression[i - 1] == '-':
                sign *= -1  # Flip sign inside brackets
            stack.append(sign)
        elif expression[i] == ')':
            sign = stack.pop()  # Restore previous sign
        else:
            result += expression[i]
        i += 1
    
    # Remove leading '+' if present
    if result and result[0] == '+':
        result = result[1:]

    return result

# Example Usage
expression = input("Enter an algebraic expression: ")
print("Expression without brackets:", remove_brackets(expression))
