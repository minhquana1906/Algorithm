class TrieNode:
    def __init__(self):
        self.children = {}  # dict chứa các node con
        self.is_end = False
        self.count = 0  # dem so tu di qua node nay


class Trie:
    def __init__(self):
        self.root = TrieNode()
        self.word_count = 0  # Đếm số từ đã thêm vào

    def insert(self, word):
        node = self.root
        print(f"\nChèn từ '{word}':")
        for char in word:
            if char not in node.children:
                node.children[char] = TrieNode()
                print(f"Tạo node mới cho ký tự '{char}'")

            # tăng số lần xuất hiện thêm 1
            node = node.children[char]
            node.count += 1
            print(f"Node '{char}' có {node.count} xâu đi qua")
        node.is_end = True
        self.word_count += 1

    def longest_common_prefix(self):
        if self.word_count == 0:
            return ""

        node = self.root
        prefix = ""

        # Tiếp tục đi xuống khi:
        # 1. Node hiện tại chỉ có 1 con
        # 2. Số lượng xâu đi qua node con bằng tổng số từ
        while node:
            # Kiểm tra số lượng node con
            children = node.children
            if len(children) != 1:
                break

            # Lấy node con duy nhất
            char = next(iter(children))
            child = children[char]

            # Kiểm tra số lượng xâu đi qua
            if child.count != self.word_count:
                break

            prefix += char
            node = child

        return prefix


def find_longest_common_prefix(strs):
    if not strs:
        return ""

    trie = Trie()
    print("Quá trình xây dựng cây Trie:")

    for word in strs:
        trie.insert(word)

    result = trie.longest_common_prefix()
    print(f"\nTiền tố chung dài nhất: {result}")
    return result


# Test cases
test_cases = [
    ["flower", "flow", "flight"],  # "fl"
    # ["dog", "racecar", "car"],  # ""
    # ["interspecies", "interstellar", "interstate"],  # "inters"
    # ["baby", "bad", "barber"],  # "ba"
    # ["", "b", "c"],  # ""
]

for i, test in enumerate(test_cases, 1):
    print(f"\nTest case {i}: {test}")
    print(f"Kết quả: {find_longest_common_prefix(test)}")
