def find(arr):
    # sort array
    arr.sort(reverse=True)

    # print array
    print("Array after moving all the elements to right:", arr)

array = [1, 3, -1, 4, -3, -5, -6, 3, 7]
# call function
find(array)
