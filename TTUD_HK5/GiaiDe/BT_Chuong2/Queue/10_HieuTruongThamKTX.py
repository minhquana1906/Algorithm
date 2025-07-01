def find_k_closest(points, k):
    # Calculate distances and sort points
    distances = []
    for x, y in points:
        dist = (x * x + y * y) ** 0.5  # Euclidean distance
        distances.append((dist, (x, y)))

    # Sort by distance and get k closest
    distances.sort()  # Sort by distance (first element of tuple)
    return [point for _, point in distances[:k]]


# Test
points = [(1, 0), (2, 1), (3, 6), (-5, 2), (1, -4)]
k = 3
result = find_k_closest(points, k)
print(f"K closest points: {result}")
