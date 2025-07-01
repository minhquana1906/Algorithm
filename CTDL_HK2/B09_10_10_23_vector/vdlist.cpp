//Tichpx 
#include<bits/stdc++.h>
#include<list>
using namespace std;
int main()
{
	list<int> L;  //giong voi deque
	//deque<int> L;  //giong voi deque
	for(int x:{4,7,132,3425,64,7,437,46,734,41})
		x%2?L.push_front(x):L.push_back(x);
		
	cout<<"\nL: ";	for(list<int>::iterator it=L.begin();it!=L.end();it++) cout<<*it<<" ";
	L.back()=L.front()=0;
	cout<<"\nL: ";	for(auto x:L) cout<<x<<" ";
	L.pop_back();
	L.pop_front();
	cout<<"\nSort L: ";
	L.sort();
	for(auto it=L.rbegin();it!=L.rend();it++) cout<<*it<<" ";
}


