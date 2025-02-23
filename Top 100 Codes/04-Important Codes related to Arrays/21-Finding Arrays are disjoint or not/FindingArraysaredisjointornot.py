# Input two arrays as space-separated values and convert them into sets
l1 = set(map(int, input("Enter array1: ").split()))
l2 = set(map(int, input("Enter array2: ").split()))

# Check if there is an intersection
if l1 & l2:
    print("Not a disjoint")
else:
    print("Disjoint")
