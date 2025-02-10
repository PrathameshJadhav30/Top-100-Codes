def backtrack(open, close, current, result):
    if open == 0 and close == 0:
        result.append(current)
        return

    if open > 0:
        backtrack(open - 1, close, current + "(", result)

    if close > open:
        backtrack(open, close - 1, current + ")", result)

def generate_balanced_parentheses(n):
    result = []
    backtrack(n, n, "", result)
    return result

# Example usage
n = int(input("Enter the number of pairs of parentheses: "))
combinations = generate_balanced_parentheses(n)
print("All combinations of balanced parentheses are:")
for combination in combinations:
    print(combination)
