class Edge:
    def __init__(self, src, dest, weight):
        self.src = src
        self.dest = dest
        self.weight = weight


class DisjointSet:
    def __init__(self, vertices):
        self.parent = list(range(vertices))
        self.rank = [0] * vertices

    def find(self, item):
        if self.parent[item] != item:
            self.parent[item] = self.find(self.parent[item])
        return self.parent[item]

    def union(self, x, y):
        px, py = self.find(x), self.find(y)
        if px == py:
            return
        if self.rank[px] < self.rank[py]:
            self.parent[px] = py
        elif self.rank[px] > self.rank[py]:
            self.parent[py] = px
        else:
            self.parent[py] = px
            self.rank[px] += 1


def kruskal_mst(vertices, edges):
    # Sort edges by weight
    edges.sort(key=lambda e: e.weight)

    ds = DisjointSet(vertices)
    mst = []
    total_cost = 0

    for edge in edges:
        # Check if adding edge creates cycle
        if ds.find(edge.src) != ds.find(edge.dest):
            ds.union(edge.src, edge.dest)
            mst.append(edge)
            total_cost += edge.weight

    # Print MST
    print("Edge \tWeight")
    for edge in mst:
        print(f"{edge.src} - {edge.dest}\t{edge.weight}")
    print(f"Total MST cost: {total_cost}")


# Test
edges = [
    Edge(0, 1, 2),
    Edge(0, 3, 6),
    Edge(1, 2, 3),
    Edge(1, 3, 8),
    Edge(1, 4, 5),
    Edge(2, 4, 7),
    Edge(3, 4, 9),
]

kruskal_mst(5, edges)
