def check_sum_map(arr, target_sum):
    # Create map to store numbers
    num_map = {}

    for num in arr:
        # Check if complement exists
        complement = target_sum - num
        if complement in num_map:
            return True
        # Add current number to map
        num_map[num] = True

    return False


# Test cases
def test_check_sum_map():
    test_cases = [
        ([2, 4, -1, 9, 8], 6),
        ([2, 5, 3, 8, 9], 3),
        ([4, 7, 3, 5], 6),
    ]

    for i, (arr, sum_val) in enumerate(test_cases, 1):
        result = check_sum_map(arr, sum_val)
        print(f"Test {i}: {result}")


test_check_sum_map()
