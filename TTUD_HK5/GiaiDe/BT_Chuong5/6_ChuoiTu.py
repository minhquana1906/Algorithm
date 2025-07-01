# def is_prefix(word1, word2):
#     # Kiểm tra word1 có phải tiền tố của word2
#     if len(word1) >= len(word2):
#         return False
#     return word2[: len(word1)] == word1


# def find_longest_chain(words):
#     n = len(words)
#     # Xây dựng đồ thị
#     graph = [[] for _ in range(n)]
#     for i in range(n):
#         for j in range(n):
#             if i != j and is_prefix(words[i], words[j]):
#                 graph[i].append(j)

#     # DFS tìm đường đi dài nhất
#     memo = [-1] * n

#     def dfs(node):
#         if memo[node] != -1:
#             return memo[node]

#         max_len = 1
#         for next_node in graph[node]:
#             max_len = max(max_len, 1 + dfs(next_node))

#         memo[node] = max_len
#         return max_len

#     # Tìm đường đi dài nhất bắt đầu từ mọi đỉnh
#     max_chain = 1
#     for i in range(n):
#         max_chain = max(max_chain, dfs(i))

#     return max_chain


# # Test
# m = int(input())
# words = []
# for _ in range(m):
#     words.append(input().strip())

# print(f"output: {find_longest_chain(words)}")


def is_prefix(word1, word2):
    if len(word1) >= len(word2):
        return False
    return word2[: len(word1)] == word1


def find_longest_chain(words):
    n = len(words)
    # Xây dựng đồ thị
    graph = [[] for _ in range(n)]
    for i in range(n):
        for j in range(n):
            if i != j and is_prefix(words[i], words[j]):
                graph[i].append(j)

    # DFS với lưu vết đường đi
    memo = [-1] * n
    path = [-1] * n

    def dfs(node):
        if memo[node] != -1:
            return memo[node]

        max_len = 1
        best_next = -1

        for next_node in graph[node]:
            curr_len = 1 + dfs(next_node)
            if curr_len > max_len:
                max_len = curr_len
                best_next = next_node

        memo[node] = max_len
        path[node] = best_next
        return max_len

    # Tìm đường đi dài nhất
    max_chain = 1
    start_node = 0

    for i in range(n):
        length = dfs(i)
        if length > max_chain:
            max_chain = length
            start_node = i

    # Khôi phục đường đi
    result = []
    curr = start_node
    while curr != -1:
        result.append(words[curr])
        curr = path[curr]

    return result


# Test
m = int(input())
words = []
for _ in range(m):
    words.append(input().strip())

longest_chain = find_longest_chain(words)
print(f"Độ dài chuỗi từ dài nhất: {len(longest_chain)}")
print(f"Chuỗi từ: {' -> '.join(longest_chain)}")
