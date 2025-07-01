def dfs(u):
    stack = [u]
    while stack:
        v = stack.pop()
        if not visited[v]:
            print(v, end=" ")
            visited[v] = True
            for x in adj[v]:
                if not visited[x]:
                    stack.append(x)


if __name__ == "__main__":
    n = 7
    visited = [False] * n
    adj = [
        [1, 2, 3],
        [3, 4],
        [5],
        [2, 5, 6],
        [3, 6],
        [],
        [5],
    ]

    dfs(0)
