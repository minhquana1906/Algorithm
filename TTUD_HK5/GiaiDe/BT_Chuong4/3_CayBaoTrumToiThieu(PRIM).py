class Graph:
    def __init__(self, vertices):
        self.V = vertices
        self.graph = [[0 for _ in range(vertices)] for _ in range(vertices)]

    def add_edge(self, u, v, weight):
        self.graph[u][v] = weight
        self.graph[v][u] = weight

    def prim_mst(self):
        # Array to store MST
        parent = [-1] * self.V

        # Key values used to pick minimum weight edge
        key = [float("inf")] * self.V
        key[0] = 0  # Start with first vertex

        # Track visited vertices
        mst_set = [False] * self.V

        # Find MST with V vertices
        for _ in range(self.V):
            # Find minimum key vertex not in MST
            min_key = float("inf")
            min_index = -1

            for v in range(self.V):
                if not mst_set[v] and key[v] < min_key:
                    min_key = key[v]
                    min_index = v

            # Add vertex to MST
            mst_set[min_index] = True

            # Update key values of adjacent vertices
            for v in range(self.V):
                if (
                    self.graph[min_index][v] > 0
                    and not mst_set[v]
                    and self.graph[min_index][v] < key[v]
                ):
                    key[v] = self.graph[min_index][v]
                    parent[v] = min_index

        # Print MST
        total_cost = 0
        print("Edge \tWeight")
        for i in range(1, self.V):
            print(f"{parent[i]} - {i}\t{self.graph[i][parent[i]]}")
            total_cost += self.graph[i][parent[i]]
        print(f"Total MST cost: {total_cost}")


# Test
g = Graph(5)
g.add_edge(0, 1, 2)
g.add_edge(0, 3, 6)
g.add_edge(1, 2, 3)
g.add_edge(1, 3, 8)
g.add_edge(1, 4, 5)
g.add_edge(2, 4, 7)
g.add_edge(3, 4, 9)

g.prim_mst()
