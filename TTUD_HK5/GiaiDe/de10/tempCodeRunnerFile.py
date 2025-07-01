import heapq


def huffman_code(ch, freq):
    heap = [[weight, [char, ""]] for char, weight in zip(ch, freq)]
    heapq.heapify(heap)
    while len(heap) > 1:
        lo = heapq.heappop(heap)
        hi = heapq.heappop(heap)
        for pair in lo[1:]:
            pair[1] = "0" + pair[1]
        for pair in hi[1:]:
            pair[1] = "1" + pair[1]
        heapq.heappush(heap, [lo[0] + hi[0]] + lo[1:] + hi[1:])
    huff_codes = sorted(heapq.heappop(heap)[1:], key=lambda p: (len(p[1]), p[0]))
    return huff_codes


# Dữ liệu đầu vào
ch = ["a", "b", "c", "d", "e", "f"]
freq = [5, 9, 12, 13, 16, 45]

# Gán mã Huffman cho các ký tự
huff_codes = huffman_code(ch, freq)
for char, code in huff_codes:
    print(f"{char}: {code}")