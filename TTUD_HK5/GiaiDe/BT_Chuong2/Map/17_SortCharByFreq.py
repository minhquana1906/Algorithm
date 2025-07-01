def modify_string(s):
    # Count frequencies
    freq_map = {}
    for char in s:
        freq_map[char] = freq_map.get(char, 0) + 1

    # Sort characters by frequency and alphabetically
    sorted_chars = sorted(freq_map.keys(), key=lambda x: (-freq_map[x], x))
    # sorted(..., key=lambda x: (-freq_map[x], x)): custom tiêu chí sắp xếp
    # Sap xep theo tan suat (freq_map, dấu '-' để theo thứ tự giảm dần), x để sắp xếp theo tt từ điển nếu tần suất bằng nhau

    return "".join(sorted_chars)


# Test cases
def test_modify_string():
    # Test case 1
    s1 = "codelearn"
    print(f"Test 1: {modify_string(s1)}")  # "eacdlnor"

    # Test case 2
    s2 = "helloworld"
    print(f"Test 2: {modify_string(s2)}")  # "lodehrw"


test_modify_string()
