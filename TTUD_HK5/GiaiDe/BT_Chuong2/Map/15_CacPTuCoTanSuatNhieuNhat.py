def find_most_frequent(arr):
    # Count frequencies using map
    freq_map = {}
    for num in arr:
        freq_map[num] = freq_map.get(num, 0) + 1

    # Find maximum frequency
    max_freq = max(freq_map.values())

    # Get all elements with maximum frequency
    result = []
    for num in freq_map:
        if freq_map[num] == max_freq:
            result.append(num)

    # Sort result
    return sorted(result), max_freq


# Test
def test_find_most_frequent():
    # Test case
    arr = [4, 7, 2, 8, 4, 8, 3, 2]
    numbers, frequency = find_most_frequent(arr)
    print(f"Numbers with highest frequency: {numbers}")
    print(f"Frequency: {frequency}")


test_find_most_frequent()
