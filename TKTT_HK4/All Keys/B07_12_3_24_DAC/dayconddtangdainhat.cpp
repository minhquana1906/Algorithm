#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, x;
	vector<int> A;
	cin >> n;
	while (n--)
	{
		cin >> x;
		if (A.empty() or A.back() < x)
			A.push_back(x);
		else
			*lower_bound(A.begin(), A.end(), x) = x;
	}
	cout << A.size();
}
