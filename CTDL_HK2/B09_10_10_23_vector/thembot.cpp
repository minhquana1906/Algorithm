//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> V={4,7,2,8,1,6,9,3,5};
	vector<int>::iterator it=V.begin()+4;
	V.insert(it,10);
//	V.erase(it);
	for(auto v:V) cout<<v<<" ";
	cout<<"\nit tai "<<*it;
	vector<int>::reverse_iterator it2;
}


