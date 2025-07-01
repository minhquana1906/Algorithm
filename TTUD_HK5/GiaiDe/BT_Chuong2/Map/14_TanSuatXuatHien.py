def count_frequency(arr):
    # Count frequency using map
    freq_map = {}
    for num in arr:
        freq_map[num] = freq_map.get(num, 0) + 1

    # Sort keys (elements) and print frequencies
    for num in sorted(freq_map.keys()):
        print(f"{num} appears {freq_map[num]} time(s)")


# Test
def test_count_frequency():
    # Test case 1
    arr1 = [1, 3, 2, 1, 5, 2, 3, 4, 2]
    print("Test case 1:")
    count_frequency(arr1)

    # Test case 2
    arr2 = [5, 5, 5, 1, 1, 2]
    print("\nTest case 2:")
    count_frequency(arr2)


test_count_frequency()
