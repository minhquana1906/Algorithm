#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x, y, k = 0;
    cin >> n >> m;
    // nhap ds ke
    vector<int> A[n + 5];
    int d[n + 5] = {}, g[n + 5] = {};
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        A[x].push_back(y);
        A[y].push_back(x);
    }

    for (int i = 1; i <= n; i++)
    {
        if (d[i] == 0)
        {
            k++;      // tao stt nhom moi
            g[k]++;   // tang so thanh vien nhom k
            d[i] = k; // dat thanh vien i  thuoc nhom k
            stack<int> st;
            st.push(i); // them thanh vien stt i vao stack
            while (st.size())
            {
                int u = st.top();
                st.pop();
                for (int v : A[u])
                {                  // xet cac dinh ke u (mqh cua tv u va cac tv co qhe)
                    if (d[v] == 0) // chua co nhom
                    {
                        d[v] = k;   // them tiep tv vao nhom k
                        g[k]++;     // tang so thanh vien nhom k them 1
                        st.push(v); // them vao stack duyet dfs tiep
                    }
                }
            }
        }
    }
    cout << "So nhom: " << k << "\n"
         << "Nhom co nhieu thanh vien nhat co: " << *max_element(g + 1, g + k + 1) << " thanh vien.";
}