# - Ý tưởng:
#     1. Khởi tạo nút gốc
#     2. Tạo hàm vun xuống
#         - tính toán vị trí hiện tại (largest), con trái, con phải
#         - nếu nút con lớn hơn nút dc xét thì đặt largest = index của nút con lớn hơn đó
#         - kiểm tra nếu nút giá trị largest khác index của nút được xét => đổi vị trí nút con lớn lên nút đang xét và ngược lại
#         - tiếp tục đệ quy
#     3. Tạo hmaf vun lên
#         - kiểm tra nút hiện tại với nút cha của nó, nếu nó lớn hơn thì đổi chỗ
#         - tiếp tục đệ quy
#     4. Tạo hàm push
#         - append vào cuối list heap[] hiện tại
#         - đệ quy vun lên
#     5. Tạo hàm pop:
#         - kiểm tra = None => trả về rỗng(k pop dc)
#         - kiểm tra độ dài = 1 => pop 1 ptu đó ra
#         - lưu lại giá trị gốc
#         - chuyển ptu từ cuối lên vị trí gốc
#         - vun từ gốc xuống
#     6. Tạo hàm top
#         - trả về gốc nếu heap != None, ngược lại trả về None


class PriorityQueue:
    def __init__(self):
        self.heap = []

    def heapify_down(self, idx):
        largest = idx  # Xét node hiện tại trở xuống (node hiện tại là lớn nhất)
        left = 2 * idx + 1  # Chỉ số con trái
        right = 2 * idx + 2  # Chỉ số con phải

        # Tìm phần tử lớn nhất giữa nút hiện tại và 2 con
        if left < len(self.heap) and self.heap[left] > self.heap[largest]:
            largest = left  # đặt index của ptu lớn nhât là idx của con trái hiện tại
        if right < len(self.heap) and self.heap[right] > self.heap[largest]:
            largest = right

        # Nếu cần thiết, đổi chỗ và đệ quy xuống
        # có phần tử lớn hơn nút gốc hiện tại và đã được gán giá trị vào largest trong bước trên
        if largest != idx:
            self.heap[largest], self.heap[idx] = self.heap[idx], self.heap[largest]
            # Tráo đổi vị trí nút gốc hiện tại với với nút con có giá trị lớn hơn
            self.heapify_down(largest)

    def heapify_up(self, idx):
        par_idx = (idx - 1) // 2  # Chỉ số cha
        # So sánh với cha và đổi chỗ nếu cần
        if idx > 0 and self.heap[idx] > self.heap[par_idx]:
            self.heap[idx], self.heap[par_idx] = self.heap[par_idx], self.heap[idx]
            # đổi vị trí nút được xét hiện tại với nút cha có giá trị nhỏ hơn
            self.heapify_up(par_idx)

    def pq_push(self, elem):
        self.heap.append(elem)  # Thêm vào cuối
        self.heapify_up(len(self.heap) - 1)  # Vun lên

    def pq_pop(self):
        if len(self.heap) == 0:
            return None
        elif len(self.heap) == 1:
            return self.heap.pop()

        r = self.heap[0]  # Lưu giá trị gốc
        self.heap[0] = self.heap.pop()  # Chuyển phần tử cuối lên gốc
        self.heapify_down(0)  # Vun xuống
        return r

    def pq_top(self):
        return self.heap[0] if self.heap else None


def demonstrate_priority_queue():
    pq = PriorityQueue()
    values = [8, 3, 9, 1, 7, 5, 6, 4]

    print("Chèn các phần tử:")
    for val in values:
        pq.pq_push(val)
        print(f"added: {pq.heap}")
        print(f"Sau khi chèn {val}: {pq.heap}")

    print("Heap list: ", pq.heap)

    print("\nLấy các phần tử ra:")
    while pq.heap:
        val = pq.pq_pop()
        print(f"Phần tử được lấy ra: {val}")
        print(f"Heap còn lại: {pq.heap}")


demonstrate_priority_queue()

#   9
#  / \
# 7   8
# /\  /\
# 4 3 5 6
# /
# 1
