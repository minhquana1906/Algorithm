class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class HashTable:
    def __init__(self, size):
        self.size = size
        self.table = [None] * size

    def hash_function(self, key):
        return key % 10

    def insert(self, value):
        index = self.hash_function(value)
        print(f"\nChèn {value}, hash({value}) = {index}")

        new_node = Node(value)

        # Nếu vị trí trống
        if self.table[index] is None:
            self.table[index] = new_node
            print(f"Tạo node đầu tiên tại index {index}")
        else:
            # Thêm vào cuối chuỗi
            current = self.table[index]
            while current.next:
                current = current.next
            current.next = new_node
            print(f"Thêm vào chuỗi tại index {index}")

    def display(self):
        print("\nBảng băm hiện tại:")
        for i in range(self.size):
            print(f"Index {i}: ", end="")
            current = self.table[i]
            while current:
                print(f"{current.data} -> ", end="")
                current = current.next
            print("None")
        print("-" * 50)


# Test
values = [4371, 1323, 6173, 4199, 4344, 9679, 1989]
hash_table = HashTable(10)

for value in values:
    hash_table.insert(value)
    hash_table.display()
