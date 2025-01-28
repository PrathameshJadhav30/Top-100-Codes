# Take user input for coordinates and initialize variables
x, y = map(int, input("Enter the values for X and Y (separated by a space): ").split())

# Check if the point lies in the First quadrant
if x > 0 and y > 0:
    print(f"The point ({x}, {y}) lies in the First quadrant.")

# Check if the point lies in the Second quadrant
elif x < 0 and y > 0:
    print(f"The point ({x}, {y}) lies in the Second quadrant.")

# Check if the point lies in the Third quadrant
elif x < 0 and y < 0:
    print(f"The point ({x}, {y}) lies in the Third quadrant.")

# Check if the point lies in the Fourth quadrant
elif x > 0 and y < 0:
    print(f"The point ({x}, {y}) lies in the Fourth quadrant.")

# Check if the point lies at the origin
elif x == 0 and y == 0:
    print(f"The point ({x}, {y}) lies at the origin.")

# Check if the point lies on the X-axis
elif y == 0 and x != 0:
    print(f"The point ({x}, {y}) lies on the X-axis.")

# Check if the point lies on the Y-axis
elif x == 0 and y != 0:
    print(f"The point ({x}, {y}) lies on the Y-axis.")
