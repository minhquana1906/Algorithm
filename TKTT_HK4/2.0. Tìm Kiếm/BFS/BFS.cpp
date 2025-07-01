#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1001];
bool visited[10001];

void input()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x); // do thi co huong thi bo
    }
    memset(visited, false, sizeof(visited));
}

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (q.size())
    {
        int v = q.front(); // lay dinh o dau hang doi
        q.pop();
        cout << v << " "; // tham v
        for (int x : adj[v])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

int main()
{
    input();
    BFS(1);
}

/*
10 11
1 2
1 3
1 5
1 10
2 4
3 6
3 7
3 9
6 7
5 8
8 9
*/