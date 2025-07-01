def sum_of_common(arr1, arr2):
    # Create map for first array
    num_map = {}
    for num in arr1:
        num_map[num] = 1

    # Track common numbers
    common_sum = 0
    seen = set()  # To handle duplicates in arr2

    # Check second array
    for num in arr2:
        if num in num_map and num not in seen:
            common_sum += num
            seen.add(num)

    return common_sum


# Test cases
def test_sum_of_common():
    # Test case 1
    arr1 = [6, 7, 5, 4, 6, 8]
    arr2 = [2, 5, 7, 5, 3]
    print(f"Test 1: {sum_of_common(arr1, arr2)}")  # Should print 12 (5 + 7)

    # Test case 2
    arr1 = [5, 6, 7]
    arr2 = [2, 3, 4]
    print(f"Test 2: {sum_of_common(arr1, arr2)}")  # Should print 0


test_sum_of_common()
