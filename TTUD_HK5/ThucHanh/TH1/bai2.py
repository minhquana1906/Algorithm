class PriorityQueue:
    def __init__(self):
        self.heap = []

    def heapify_remove(self, idx):
        largest = idx
        left = idx * 2 + 1
        right = idx * 2 + 2

        if left < len(self.heap) and self.heap[left] > self.heap[largest]:
            largest = left
        if right < len(self.heap) and self.heap[right] > self.heap[largest]:
            largest = right

        if largest != idx:
            self.heap[largest], self.heap[idx] = self.heap[idx], self.heap[largest]
            self.heapify_remove(largest)

    def heapify_add(self, idx):
        par_idx = (idx - 1) // 2
        if idx > 0 and self.heap[idx] > self.heap[par_idx]:
            self.heap[idx], self.heap[par_idx] = self.heap[par_idx], self.heap[idx]
            self.heapify_add(par_idx)

    def pq_push(self, elem):
        self.heap.append(elem)
        self.heapify_add(len(self.heap) - 1)

    def pq_pop(self):
        if len(self.heap) == 0:
            return None
        elif len(self.heap) == 1:
            return self.heap.pop()

        r = self.heap[0]
        self.heap[0] = self.heap.pop()
        self.heapify_remove(0)
        return r

    def pq_get_value(self):
        if len(self.heap) == 0:
            return None
        else:
            return self.heap[0]


if __name__ == "__main__":
    pq = PriorityQueue()
    pq.pq_push(3)
    pq.pq_push(1)
    pq.pq_push(6)
    pq.pq_push(5)
    pq.pq_push(100)
    pq.pq_push(9)
    pq.pq_push(15)

    print("Heap List: ", pq.heap)

    print("Phan tu dau hang doi uu tien: ", pq.pq_get_value())
    print("Xoa phan tu: ", pq.pq_pop())
    print("Phan tu dau hang doi sau khi xoa 1 phan tu: ", pq.pq_get_value())
