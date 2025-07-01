def sum_min_max_windows(arr, k):
    n = len(arr)
    if n < k:
        return 0

    total_sum = 0

    # Process each window of size k
    for i in range(n - k + 1):
        # Get current window
        window = arr[i : i + k]
        # Find min and max
        window_sum = min(window) + max(window)
        total_sum += window_sum

    return total_sum


# Test cases
def test_sum_min_max_windows():
    # Test case 1
    arr1 = [2, 5, -1, 7, -3, -1, -2]
    k1 = 4
    print(f"Test 1: {sum_min_max_windows(arr1, k1)}")  # Should print 18

    # Test case 2
    arr2 = [1, 2, 3, 4, 5]
    k2 = 3
    print(f"Test 2: {sum_min_max_windows(arr2, k2)}")


test_sum_min_max_windows()
