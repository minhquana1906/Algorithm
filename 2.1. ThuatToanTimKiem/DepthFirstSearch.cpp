#include <bits/stdc++.h>
using namespace std;

// Tim các số trên đường về 0

void DFS()
{
    int n;
    cin >> n;

    stack<int> s;
    set<int> out;

    s.push(n);
    out.insert(n);

    while (s.size() > 0)
    {
        int u = s.top();
        s.pop();
        for (int a = 1; a * a <= u; a++)
        {
            if (u % a == 0)
            {
                int v = (a - 1) * (u / a + 1);
                if (out.find(v) == out.end())
                {
                    s.push(v);
                    out.insert(v);
                }
            }
        }
    }
    for (int x : out)
    {
        cout << x << " ";
    }
}

int main()
{
    DFS();
}