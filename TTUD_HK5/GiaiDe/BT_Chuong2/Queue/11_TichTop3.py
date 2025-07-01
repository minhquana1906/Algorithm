"""Đề bài k rõ => Not sure"""


def find_products(A):
    n = len(A)
    result = []

    # For each index i
    for i in range(n):
        # Get current subarray
        subarray = [(A[j], j) for j in range(i + 1)]

        # If not enough elements
        if i < 2:
            result.append(0)
            continue

        # Sort by value, keeping track of indices
        subarray.sort(reverse=True)

        # Find 3 largest with different indices
        largest = []
        used_indices = set()
        for value, idx in subarray:
            if idx not in used_indices:
                largest.append(value)
                used_indices.add(idx)
                if len(largest) == 3:
                    break

        # Calculate product if we found 3 numbers
        if len(largest) == 3:
            result.append(largest[0] * largest[1] * largest[2])
        else:
            result.append(0)

    return result


# Test
A = [1, 2, 3, 4, 5]
result = find_products(A)
print(f"Products: {result}")

# Additional test
A = [5, 5, 5, 5]
result = find_products(A)
print(f"Products with duplicates: {result}")
