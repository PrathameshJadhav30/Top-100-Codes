def find_mirror_pairs(pairs):
    seen = set()

    for x, y in pairs:
        if (y, x) in seen:
            print((x, y))
        seen.add((x, y))

pairs = [(3, 4), (1, 2), (5, 2), (7, 10), (4, 3), (2, 5)]
find_mirror_pairs(pairs)
