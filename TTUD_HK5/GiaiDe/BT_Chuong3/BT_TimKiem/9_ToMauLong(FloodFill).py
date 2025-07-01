def flood_fill(image, sr, sc, new_color):
    # Lấy kích thước ảnh
    rows = len(image)
    cols = len(image[0])
    # Lưu màu gốc cần thay thế
    start_color = image[sr][sc]

    # Nếu màu mới giống màu cũ thì không cần thay đổi
    if start_color == new_color:
        return image

    def dfs(r, c):
        # Kiểm tra điểm hợp lệ và cùng màu với điểm xuất phát
        if r < 0 or r >= rows or c < 0 or c >= cols or image[r][c] != start_color:
            return

        # Thay đổi màu
        image[r][c] = new_color

        # Loang theo 4 hướng
        dfs(r - 1, c)  # lên
        dfs(r + 1, c)  # xuống
        dfs(r, c - 1)  # trái
        dfs(r, c + 1)  # phải

    # Bắt đầu loang từ điểm xuất phát
    dfs(sr, sc)
    return image


# Ví dụ sử dụng
image = [[1, 1, 1, 1], [1, 1, 0, 1], [1, 0, 1, 1], [1, 1, 1, 1]]
sr, sc = 1, 1
new_color = 2

result = flood_fill(image, sr, sc, new_color)
for row in result:
    print(row)
