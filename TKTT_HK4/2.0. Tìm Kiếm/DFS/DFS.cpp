#include <bits/stdc++.h>
using namespace std;

/*
input: so luong dinh, sl canh: 9 9

*/

int n, m;              // luu sl canh, dinh
vector<int> adj[1001]; // mang cac vector luu ds ke
bool visited[1001];    // mang kiem tra da duyet chua
queue<int> s;

void input()
{
    // chuyen danh sach ke
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x); // do thi co huong thi khong pushback dong nay
    }
    memset(visited, false, sizeof(visited));
}

void DFS(int u)
{
    s.push(u);
    cout << u << " ";
    visited[u] = true; // danh dau la dc tham
    // xet cac dinh ke cua u
    for (auto v : adj[u])
    {
        if (!visited[v]) // neu chua tham thi de quy den tham
        {
            DFS(v);
            s.push(u);
        }
    }
}

int main()
{
    input();
    DFS(1);
    cout << "\nPath: ";
    while (!s.empty()) // In ra đường đi trong queue
    {
        cout << s.front() << " ";
        s.pop();
    }
    return 0;
}
/*
9 9
1 2
1 3
1 5
2 4
3 6
3 7
3 9
5 8
8 9
*/