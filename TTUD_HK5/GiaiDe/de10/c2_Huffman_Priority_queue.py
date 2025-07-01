import heapq


def huffman_code(ch, freq):
    # ziped = zip(ch, freq)
    # print("ziped: ", list(ziped))
    #  [('a', 5), ('b', 9), ('c', 12), ('d', 13), ('e', 16), ('f', 45)]
    heap = [[f, [c, ""]] for c, f in zip(ch, freq)]
    # print(heap)
    # heap:  [[5, ['a', '']], [9, ['b', '']], [12, ['c', '']], [13, ['d', '']], [16, ['e', '']], [45, ['f', '']]]
    heapq.heapify(heap)
    while len(heap) > 1:
        # loại bỏ và gán 2 phần tử có trọng số nhỏ nhất vào lo & hi
        print("heap: ", heap)
        lo = heapq.heappop(heap)
        hi = heapq.heappop(heap)

        # bỏ qua trọng số, chỉ giữ lại ký tự và mã Huffman, biết lo, hi có dạng: [[5, ['a', '']]
        for pair in lo[1:]:
            print("pair-lo:", pair)
            pair[1] = "0" + pair[1]
        for pair in hi[1:]:
            print("pair-hi:", pair)
            pair[1] = "1" + pair[1]
        heapq.heappush(heap, [lo[0] + hi[0]] + lo[1:] + hi[1:])
        print("pushed heap: ", heap)
    return heap[0][1:]
    # huff_codes = sorted(heapq.heappop(heap)[1:], key=lambda p: (len(p[1]), p[0]))
    # print("huff_codes: ", huff_codes)
    # return huff_codes


# Dữ liệu đầu vào
ch = ["a", "b", "c", "d", "e", "f"]
freq = [5, 9, 12, 13, 16, 45]

# Gán mã Huffman cho các ký tự
huff_codes = huffman_code(ch, freq)
for char, code in huff_codes:
    print(f"{char}: {code}")


# from queue import PriorityQueue


# # Hàm xây dựng cây Huffman
# def build_huffman_tree(ch, freq):
#     pq = PriorityQueue()
#     for char, f in zip(ch, freq):
#         pq.put((f, char))

#     while pq.qsize() > 1:
#         left = pq.get()
#         right = pq.get()
#         merged_freq = left[0] + right[0]
#         pq.put((merged_freq, (left, right)))

#     return pq.get()


# # Hàm gán mã Huffman cho các ký tự
# def assign_codes(node, prefix="", codebook={}):
#     if isinstance(node[1], str):
#         codebook[node[1]] = prefix
#     else:
#         assign_codes(node[1][0], prefix + "0", codebook)
#         assign_codes(node[1][1], prefix + "1", codebook)
#     return codebook


# # Dữ liệu đầu vào
# ch = ["a", "b", "c", "d", "e", "f"]
# freq = [5, 9, 12, 13, 16, 45]

# # Xây dựng cây Huffman và gán mã Huffman cho các ký tự
# huffman_tree = build_huffman_tree(ch, freq)
# huff_codes = assign_codes(huffman_tree)

# # In ra mã Huffman cho các ký tự
# for char in ch:
#     print(f"{char}: {huff_codes[char]}")
