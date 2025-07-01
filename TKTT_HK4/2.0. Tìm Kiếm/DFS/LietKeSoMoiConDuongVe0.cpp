#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    set<int> out;
    int n;
    cin >> n;

    st.push(n);
    out.insert(n);

    while (st.size())
    {
        int u = st.top();
        st.pop();

        for (int a = 1; a * a <= u; a++)
        {
            if (u % a == 0)
            {
                int v = (a - 1) * (u / a + 1);
                if (out.find(v) == out.end())
                {
                    st.push(v);
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