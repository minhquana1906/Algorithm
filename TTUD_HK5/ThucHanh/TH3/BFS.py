from collections import deque


def bfs(u):
    q = deque([u])
    visited[u] = True
    while q:
        v = q.popleft()
        print(v, end=" ")
        for x in adj[v]:
            if not visited[x]:
                q.append(x)
                visited[x] = True


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

    bfs(0)
