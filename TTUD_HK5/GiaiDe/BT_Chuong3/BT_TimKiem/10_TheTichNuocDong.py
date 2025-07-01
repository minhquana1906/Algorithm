def calc_water_volume(h, m, n, i, j):
    if i == 0 or i == m - 1 or j == 0 or j == n - 1:
        return 0

    # Tìm độ cao max từ 4 hướng
    left = max(h[i][k] for k in range(j))
    right = max(h[i][k] for k in range(j + 1, n))
    up = max(h[k][j] for k in range(i))
    down = max(h[k][j] for k in range(i + 1, m))

    # Lấy độ cao thấp nhất trong các max
    water_level = min(left, right, up, down)

    # Nếu mực nước cao hơn cột hiện tại thì có nước đọng
    return max(0, water_level - h[i][j])


def water_volume(h, m, n):
    total = 0
    for i in range(m):
        for j in range(n):
            total += calc_water_volume(h, m, n, i, j)
    return total


# Đọc input
m = int(input("Nhập số hàng M: "))
n = int(input("Nhập số cột N: "))

# Đọc ma trận độ cao
print("Nhập ma trận độ cao:")
h = []
for i in range(m):
    row = list(map(int, input().split()))
    h.append(row)

# Tính và in kết quả
result = water_volume(h, m, n)
print(f"Thể tích nước đọng: {result}")


# Nước sẽ đọng ở các vị trí có độ cao 0
# Mỗi vị trí có thể chứa 3 đơn vị nước
# Tổng cộng: 4 vị trí * 3 đơn vị = 12
