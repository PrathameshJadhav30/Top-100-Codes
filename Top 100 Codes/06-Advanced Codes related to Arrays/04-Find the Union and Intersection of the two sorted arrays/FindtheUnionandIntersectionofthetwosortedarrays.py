def find_union_and_intersection(arr1, arr2):
    n1 = len(arr1)
    n2 = len(arr2)
    i = j = 0
    union = []
    intersection = []

    # Traverse both arrays
    while i < n1 and j < n2:
        if arr1[i] < arr2[j]:
            union.append(arr1[i])
            i += 1
        elif arr2[j] < arr1[i]:
            union.append(arr2[j])
            j += 1
        else:
            union.append(arr1[i])  # or arr2[j]
            intersection.append(arr1[i])
            i += 1
            j += 1

    # Add remaining elements of arr1
    while i < n1:
        union.append(arr1[i])
        i += 1

    # Add remaining elements of arr2
    while j < n2:
        union.append(arr2[j])
        j += 1

    # Remove duplicates while preserving order
    def remove_duplicates(seq):
        result = []
        seen = set()
        for item in seq:
            if item not in seen:
                seen.add(item)
                result.append(item)
        return result

    union = remove_duplicates(union)
    intersection = remove_duplicates(intersection)

    print("Union:", union)
    print("Intersection:", intersection)

# Example
arr1 = [1, 2, 4, 5, 6]
arr2 = [2, 3, 5, 7]
find_union_and_intersection(arr1, arr2)
