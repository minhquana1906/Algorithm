from collections import deque


def rotOrange(matrix):
    if not matrix:
        return -1

    rows, cols = len(matrix), len(matrix[0])
    queue = deque()
    fresh_count = 0

    # Tìm cam hỏng ban đầu và đếm cam tươi
    for i in range(rows):
        for j in range(cols):
            if matrix[i][j] == 2:
                queue.append((i, j, 0))
            elif matrix[i][j] == 1:
                fresh_count += 1

    print("\nCam hỏng ban đầu trong queue:")
    print(list(queue))

    if fresh_count == 0:
        return 0

    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]

    while queue:
        row, col, time = queue.popleft()
        print(f"\nXét cam hỏng tại vị trí ({row}, {col}) tại thời điểm {time}")

        for dx, dy in directions:
            new_row, new_col = row + dx, col + dy

            if (
                0 <= new_row < rows
                and 0 <= new_col < cols
                and matrix[new_row][new_col] == 1
            ):

                matrix[new_row][new_col] = 2
                fresh_count -= 1
                queue.append((new_row, new_col, time + 1))
                # if fresh_count == 0:
                #     return time
                print(f"Thêm vào queue: ({new_row}, {new_col}, {time + 1})")
                print(f"Queue hiện tại: {list(queue)}")
                print(f"Số cam tươi còn lại: {fresh_count}")

    return time if fresh_count == 0 else -1


matrix1 = [[2, 1, 0, 2, 1], [1, 0, 1, 2, 1], [1, 0, 0, 2, 1]]

print("Test case 1:")
print(f"Kết quả: {rotOrange(matrix1)}")
