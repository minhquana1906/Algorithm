def sort_by_special_weight(arr, k):
    # Sắp xếp theo (-trọng số, giá trị)
    # Dùng -trọng số để sắp xếp giảm dần
    return sorted(arr, key=lambda x: (-(x % k), x))


# Nhập số phần tử N và K
# n, k = map(int, input("Nhập N và K: ").split())

# # Nhập mảng
# arr = []
# for i in range(n):
#     x = int(input(f"Nhập phần tử thứ {i+1}: "))
#     arr.append(x)

arr = [1, 3, 5, 6, 8, 4, 5, 8, 9, 45, 2]
n = len(arr)
k = 5

# Sắp xếp và in kết quả
result = sort_by_special_weight(arr, k)
print("Kết quả:", *result)
