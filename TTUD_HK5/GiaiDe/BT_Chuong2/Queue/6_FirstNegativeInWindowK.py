def first_negative(arr, k):
    n = len(arr)
    result = []

    # Process each window of size k
    for i in range(n - k + 1):
        # Find first negative in current window
        found_negative = False
        for j in range(i, i + k):
            if arr[j] < 0:
                result.append(arr[j])
                found_negative = True
                break
        if not found_negative:
            result.append(0)

    return result


# Test cases
def test_first_negative():
    # Test case 1
    arr1 = [-8, 2, 3, -6, 10]
    k1 = 2
    print(f"Test 1: {first_negative(arr1, k1)}")  # [-8, 0, -6, -6]

    # Test case 2
    arr2 = [1, 2, 3, 4, 5]
    k2 = 3
    print(f"Test 2: {first_negative(arr2, k2)}")  # [0, 0, 0]


test_first_negative()
