class TrieNode:
    def __init__(self):
        self.children = {}
        self.is_end = False
        self.count = 0


class Trie:
    def __init__(self):
        self.root = TrieNode()
        self.word_count = 0

    def insert(self, word):
        node = self.root
        for char in word:
            if char not in node.children:
                node.children[char] = TrieNode()
            node = node.children[char]
            node.count += 1
        node.is_end = True
        self.word_count += 1

    def longest_common(self):
        if self.word_count == 0:
            return ""

        node = self.root
        prefix = ""
        while node:
            children = node.children
            if len(children) != 1:
                break

            char = next(iter(children))
            child = children[char]

            if child.count != self.word_count:
                break

            prefix += char
            node = child
        return prefix


strs = ["flower", "flow", "flight"]
trie = Trie()
for w in strs:
    trie.insert(w)

print(trie.longest_common())
