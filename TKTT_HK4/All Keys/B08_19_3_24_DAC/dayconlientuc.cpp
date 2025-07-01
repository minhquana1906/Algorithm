// Tichpx - day con lien tuc co tong lon nhat
#include <bits/stdc++.h>
using namespace std;
int a[100005];

long long SubMax(int L, int R)
{
	if (L == R - 1)
		return a[L];
	int M = (L + R) / 2;
	long long X = max(SubMax(L, M), SubMax(M, R)), t = a[M - 1], A = t, z = a[M], B = z;

	for (int i = M - 2; i >= L; i--)
	{
		t += a[i];
		A = max(A, t);
	}
	for (int i = M + 1; i < R; i++)
	{
		z += a[i];
		B = max(B, z);
	}

	return max(A + B, X);
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	cout << SubMax(1, n + 1);
}
