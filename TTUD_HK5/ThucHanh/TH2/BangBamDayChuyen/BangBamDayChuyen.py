class Node:
    def __init__(self, key, value):
        self.key = key
        self.value = value
        self.next = None


class BangBamDayChuyen:
    def __init__(self, size=23):
        self.size = size
        self.table = [None] * size

    def hash(self, key):
        return sum(ord(c) for c in key) % self.size

    def add(self, key, value):
        idx = self.hash(key)
        new_node = Node(key, value)

        if self.table[idx] is None:
            self.table[idx] = new_node
        else:
            current = self.table[idx]
            while current.next is not None:
                if current.key == key:
                    current.value = value
                    return
                current = current.next
            current.next = new_node

    def get(self, key):
        idx = self.hash(key)
        current = self.table[idx]
        while current:
            if current.key == key:
                return current.value
            current = current.next
        return None


if __name__ == "__main__":
    bang_bam_day_chuyen = BangBamDayChuyen()
    bang_bam_day_chuyen.add("programming", "Lập trình")
    bang_bam_day_chuyen.add("interesting", "Thú vị")
    bang_bam_day_chuyen.add("data", "Dữ liệu")

    print(bang_bam_day_chuyen.get("programming"))
    print(bang_bam_day_chuyen.get("interesting"))
    print(bang_bam_day_chuyen.get("data"))
    print(bang_bam_day_chuyen.get("service"))
