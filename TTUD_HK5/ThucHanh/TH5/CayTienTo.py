class TrieNode:
    def __init__(self):
        self.children = {}
        self.is_end_of_word = False


class Trie:
    def __init__(self):
        self.root = TrieNode()

    def insert(self, word):
        node = self.root
        for char in word:
            if char not in node.children:
                node.children[char] = TrieNode()
            node = node.children[char]
        node.is_end_of_word = True

    def search(self, word):
        node = self.root
        for char in word:
            if char not in node.children:
                return False
            node = node.children[char]
        return node.is_end_of_word

    def longest_common_prefix(self):
        prefix = []
        node = self.root
        while node and not node.is_end_of_word and len(node.children) == 1:
            char, next_node = list(node.children.items())[0]
            prefix.append(char)
            node = next_node
        return "".join(prefix)


trie = Trie()
words = ["flower", "flow", "flight"]
for word in words:
    trie.insert(word)


for word in words:
    found = trie.search(word)
    print(f"'{word}' {'is' if found else 'is not'} in the Trie")

lcp = trie.longest_common_prefix()
print(f"Longest Common Prefix: '{lcp}'")
