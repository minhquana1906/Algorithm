import heapq


def huffman_code(char, freq):
    heap = [[f, [c, ""]] for c, f in zip(char, freq)]
    heapq.heapify(heap)
    while len(heap) > 1:
        lo = heapq.heappop(heap)
        hi = heapq.heappop(heap)

        for pair in lo[1:]:
            pair[1] = "0" + pair[1]
        for pair in hi[1:]:
            pair[1] = "1" + pair[1]
        heapq.heappush(heap, [lo[0] + hi[0]] + lo[1:] + hi[1:])
    return heap[0][1:]


char = ["a", "b", "c", "d", "e", "f"]
freq = [5, 9, 12, 13, 16, 45]

res = huffman_code(char, freq)
for ch, code in res:
    print(f"{ch}: {code}")
