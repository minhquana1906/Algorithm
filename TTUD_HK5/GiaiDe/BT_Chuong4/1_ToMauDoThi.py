class Graph:
    def __init__(self, vertices):
        self.V = vertices
        self.graph = [[] for _ in range(vertices)]

    def add_edge(self, v1, v2):
        self.graph[v1].append(v2)
        self.graph[v2].append(v1)

    def color_graph(self):
        colors = [-1] * self.V
        colors[0] = 0  # First vertex gets first color

        # Color remaining vertices
        for vertex in range(1, self.V):
            # Mark colors used by neighbors
            used_colors = {
                colors[neighbor]
                for neighbor in self.graph[vertex]
                if colors[neighbor] != -1
            }

            # Find first unused color
            color = 0
            while color in used_colors:
                color += 1
            colors[vertex] = color

        return colors


# Test
g = Graph(5)
edges = [(0, 1), (0, 2), (1, 2), (1, 3), (2, 3), (3, 4)]
for v1, v2 in edges:
    g.add_edge(v1, v2)

colors = g.color_graph()
print("Colors:", colors)
