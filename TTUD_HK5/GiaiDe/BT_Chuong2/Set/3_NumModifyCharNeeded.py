def diversity(s, k):
    # Get unique characters using set
    unique_chars = set(s)

    # Case 1: If k is bigger than string length - impossible
    if k > len(s):
        return "impossible"

    # Case 2: If k equals current unique chars - no changes needed
    if k == len(unique_chars):
        return "0"

    # Case 3: Need to convert some duplicates to new chars
    if k > len(unique_chars):
        duplicates = len(s) - len(unique_chars)
        needed = k - len(unique_chars)
        return str(needed) if needed <= duplicates else "impossible"

    # Case 4: Need to convert some chars to duplicates
    chars_to_change = len(unique_chars) - k
    return str(chars_to_change)


# Test
test_cases = [("yandex", 6), ("google", 7), ("codelearn", 9)]  # 0  # impossible  # 1

for s, k in test_cases:
    print(f"{s}, k={k}: {diversity(s, k)}")
