class BangBamThamDoTuyenTinh:
    def __init__(self, size=23):
        self.size = size
        self.table = [None] * size

    def hash(self, key):
        return sum(ord(x) for x in key) % self.size

    def add(self, key, value):
        idx = self.hash(key)
        true_idx = idx
        while self.table[idx] is not None:
            if self.table[idx][0] == key:
                self.table[idx] = (key, value)
                return
            idx = (idx + 1) % self.size
            if idx == true_idx:
                raise Exception("Bảng băm đã đầy")
        self.table[idx] = (key, value)

    def get(self, key):
        idx = self.hash(key)
        true_idx = idx
        while self.table[idx] is not None:
            if self.table[idx][0] == key:
                return self.table[idx][1]
            idx = (idx + 1) % self.size
            if idx == true_idx:
                break
        return None


def main():
    bang_bam_tham_do_tuyen_tinh = BangBamThamDoTuyenTinh()
    bang_bam_tham_do_tuyen_tinh.add("programming", "Lập trình")
    bang_bam_tham_do_tuyen_tinh.add("interesting", "Thú vị")
    bang_bam_tham_do_tuyen_tinh.add("data", "Dữ liệu")

    print(bang_bam_tham_do_tuyen_tinh.get("programming"))
    print(bang_bam_tham_do_tuyen_tinh.get("interesting"))
    print(bang_bam_tham_do_tuyen_tinh.get("data"))
    print(bang_bam_tham_do_tuyen_tinh.get("service"))


if __name__ == "__main__":
    main()
