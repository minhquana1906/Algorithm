def similar(X, Y):
    if X == Y:
        return True
    diffs = []
    for i in range(len(X)):
        if X[i] != Y[i]:
            diffs.append(i)
            if len(diffs) > 2:
                return False
    if len(diffs) == 2:
        i, j = diffs
        return X[i] == Y[j] and X[j] == Y[i]
    return False


class UnionFind:
    def __init__(self, n):
        self.parent = list(range(n))

    def find(self, x):
        while self.parent[x] != x:
            self.parent[x] = self.parent[self.parent[x]]  # Path compression
            x = self.parent[x]
        return x

    def union(self, x, y):
        px = self.find(x)
        py = self.find(y)
        if px != py:
            self.parent[py] = px


def count_groups(A):
    n = len(A)
    uf = UnionFind(n)
    for i in range(n):
        for j in range(i + 1, n):
            if similar(A[i], A[j]):
                uf.union(i, j)
    groups = set()
    for i in range(n):
        groups.add(uf.find(i))
    return len(groups)


# Đọc đầu vào
N = int(input())
A = [input().strip() for _ in range(N)]

# In ra số lượng nhóm
print(count_groups(A))

# input: 4 tars rats arts stars
