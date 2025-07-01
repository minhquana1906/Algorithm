//Tichpx
#include<bits/stdc++.h>
#include"queue.cpp"
using namespace std;
void sol()
{
	QUEUE< pair<string,int> > Q;
	for(auto x:{"dangdungcntt", "tienquanutc", "quang123", "maianh", "nguyenminhduc2820"})
	Q.push({x,1});  //Q.push(make_pair(x,1));
	int n;
	cin>>n;
	while(n>Q.front().second)
	{
		Q.push(Q.front());
		Q.back().second*=2;
		n-=Q.front().second;
		Q.pop();		
	}
	cout<<Q.front().first<<"\n";
}
int main()
{
	int test;
	cin>>test;
	while(test--) sol();
}

