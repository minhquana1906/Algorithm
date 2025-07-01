//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<string> Q;
	for(auto x:{"dangdungcntt", "tienquanutc", "quang123", "maianh", "nguyenminhduc2820"})
	Q.push(x);
	int n;
	cin>>n;
	while(--n)
	{
		Q.push(Q.front());
		Q.push(Q.front());
		Q.pop();
	}
	cout<<Q.front();
}


