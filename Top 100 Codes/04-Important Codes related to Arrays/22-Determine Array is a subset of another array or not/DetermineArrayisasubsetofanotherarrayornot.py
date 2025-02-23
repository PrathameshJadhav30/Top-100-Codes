# Program to check whether one array is a subset of another

arr1 = {11, 12, 13, 21, 30, 70}
arr2 = {11, 30, 70, 12}

# Check if arr2 is a subset of arr1
if arr2.issubset(arr1):
    print("arr2 is a subset of arr1")
else:
    print("arr2 is not a subset of arr1")
