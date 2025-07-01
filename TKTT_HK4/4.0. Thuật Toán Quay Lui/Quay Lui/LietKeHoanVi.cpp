#include <bits/stdc++.h>
using namespace std;

int n;
map<int, int> m;

void TRY(string x)
{
    if (x.size() == n)
    {
        cout << x << endl;
    }
    else
    {
        for (auto &z : m)
        {
            if (z.second > 0)
            {
                z.second--;
                TRY(x + to_string(z.first));
                z.second++;
            }
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        m[i]++;
    }
    TRY("");
}

// int n, used[105], x[105];

// void TRY(int i)
// {
//     // duyet cac kha nang ma x[i] co the nhan dc
//     for (int j = 1; j <= n; j++)
//     {
//         // xet xem lieu rang co the gan x[i] = j hay khong
//         if (used[j] == 0)
//         {
//             used[j] = 1;
//             x[i] = j; // danh dau dc su dung
//             if (i == n)
//             {
//                 for (int i = 1; i <= n; i++)
//                 {
//                     cout << x[i];
//                 }
//                 cout << endl;
//             }
//             else
//             {
//                 TRY(i + 1);  //trong try(2) => ket thuc try(3)
//                                  => set lai used[2]
//             }
//             used[j] = 0;
//         }
//     }
// }

// int main()
// {
//     cin >> n;
//     memset(used, 0, sizeof(used));
//     TRY(1);
// }