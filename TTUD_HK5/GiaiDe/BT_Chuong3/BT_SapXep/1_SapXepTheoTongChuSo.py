def digit_sum(n):
    return sum(int(d) for d in str(abs(n)))


def sort_by_digit_sum(arr):
    # Sắp xếp theo (tổng chữ số, giá trị số)
    return sorted(arr, key=lambda x: (digit_sum(x), x))


# Đọc input
# n = int(input())
# arr = []
# for i in range(n):
#     x = int(input(f"Nhập phần tử thứ {i+1}: "))
#     arr.append(x)

arr = [13, 20, 7, 4]

# Sắp xếp và in kết quả
result = sort_by_digit_sum(arr)
print(*result)
