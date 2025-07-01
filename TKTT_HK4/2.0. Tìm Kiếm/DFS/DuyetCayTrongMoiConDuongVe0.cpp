// #include <bits/stdc++.h>
// using namespace std;

// vector<int> pre, in, post;

// void dfs(int u)
// {
//     pre.push_back(u);
//     cout << "pre.push: " << u << endl;
//     vector<int> children;
//     for (int a = 1; a * a <= u; a++)
//     {
//         cout << "a: " << a << endl;
//         if (u % a == 0)
//         {
//             int v = (a - 1) * (u / a + 1);
//             if (v >= 0)
//             {
//                 children.push_back(v);
//                 cout << "push v: " << v << endl;
//             }
//         }
//     }
//     sort(children.begin(), children.end());
//     for (auto x : children)
//     {
//         cout << x << " ";
//     }
//     cout << endl;
//     for (int v : children)
//     {
//         cout << endl;
//         cout << "u: " << u << " v: " << v << endl;
//         in.push_back(u);
//         cout << "in.push " << u << endl;
//         dfs(v);
//     }
//     post.push_back(u);
//     cout << "post.push " << u << endl;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     dfs(n);
//     for (int u : pre)
//         cout << u << " ";
//     cout << endl;
//     for (int u : in)
//         cout << u << " ";
//     cout << endl;
//     for (int u : post)
//         cout << u << " ";
//     cout << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

vector<int> pre, in, post;

void dfs(int u)
{
    pre.push_back(u);
    vector<int> children;
    for (int a = 1; a * a <= u; a++)
    {
        if (u % a == 0)
        {
            int v = (a - 1) * (u / a + 1);
            if (v >= 0)
                children.push_back(v);
        }
    }
    sort(children.begin(), children.end());
    for (int v : children)
    {
        in.push_back(u);
        dfs(v);
    }
    post.push_back(u);
}

int main()
{
    int n;
    cin >> n;
    dfs(n);
    for (int u : pre)
        cout << u << " ";
    cout << endl;
    for (int u : in)
        cout << u << " ";
    cout << endl;
    for (int u : post)
        cout << u << " ";
    cout << endl;
    return 0;
}