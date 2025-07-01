def find_max_with_min_freq(arr):
    # Bước 1: Đếm tần suất
    freq_dict = {}
    print("Bước 1: Đếm tần suất")
    for num in arr:
        freq_dict[num] = freq_dict.get(num, 0) + 1
        print(f"Số {num}: {freq_dict[num]} lần")

    # Bước 2: Tìm tần suất nhỏ nhất
    min_freq = min(freq_dict.values())
    print(f"\nBước 2: Tần suất nhỏ nhất = {min_freq}")

    # Bước 3: Lọc số có tần suất nhỏ nhất
    candidates = [num for num, freq in freq_dict.items() if freq == min_freq]
    print(f"Bước 3: Các số có tần suất nhỏ nhất: {candidates}")

    # Bước 4: Tìm số lớn nhất
    result = max(candidates)
    print(f"Bước 4: Số lớn nhất trong các số có tần suất nhỏ nhất: {result}")

    return result


# Test
arr = [2, 2, 4, 4, 7, 7, 7]
result = find_max_with_min_freq(arr)

print(result)
