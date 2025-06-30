import heapq

def print_sorted_elements(matrix):
    N = len(matrix)
    min_heap = []

    # insert first element of each row with (value, row, col)
    for i in range(N):
        heapq.heappush(min_heap, (matrix[i][0], i, 0))

    result = []

    while min_heap:
        val, r, c = heapq.heappop(min_heap)
        result.append(val)

        if c + 1 < N:
            heapq.heappush(min_heap, (matrix[r][c + 1], r, c + 1))

    print("Sorted elements:", *result)

# Test
matrix = [
    [10, 20, 30, 40],
    [15, 25, 35, 45],
    [27, 29, 37, 48],
    [32, 33, 39, 50]
]

print_sorted_elements(matrix)
