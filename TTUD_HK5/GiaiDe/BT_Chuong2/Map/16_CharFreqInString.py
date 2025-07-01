def count_char(s):
    # Count frequencies
    freq_map = {}
    for char in s:
        freq_map[char] = freq_map.get(char, 0) + 1

    # Create formatted strings and sort
    result = []
    for char in sorted(freq_map.keys()):
        result.append(f"{char} {freq_map[char]}")

    return result


# Test cases
def test_count_char():
    # Test case 1
    s1 = "aacccd"
    print(f"Test 1: {count_char(s1)}")  # ["a 2", "c 3", "d 1"]

    # Test case 2
    s2 = "aabbbca"
    print(f"Test 2: {count_char(s2)}")  # ["a 3", "b 3", "c 1"]


test_count_char()
