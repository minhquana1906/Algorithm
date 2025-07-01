// Tichpx - dem so nghich the
#include <bits/stdc++.h>
using namespace std;
int b[100005], c[100005], n, a[100005];
long long snt(int L, int R)
{
	if (L >= R - 1)
		return 0;
	int M = (L + R) / 2, k, i, j;
	long long s = snt(L, M) + snt(M, R);
	for (k = M - 1, i = 0; k >= L; k--)
		b[++i] = a[k]; // b[1]...b[i]
	for (k = R - 1, j = 0; k >= M; k--)
		c[++j] = a[k]; // c[1]...c[j]

	for (k = L; k < R; k++)
		if (i > 0 && j > 0)
		{
			if (b[i] > c[j])
			{
				a[k] = c[j--];
				s += i;
			}
			else
				a[k] = b[i--];
		}
		else
			a[k] = i > 0 ? b[i--] : c[j--];
	return s;
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	cout << snt(1, n + 1);
}
