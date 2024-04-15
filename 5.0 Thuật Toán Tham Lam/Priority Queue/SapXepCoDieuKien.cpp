#include <bits/stdc++.h>
using namespace std;

struct cmp
{
    bool operator()(int a, int b)
    {
        if (a % 3 == b % 3)
            return a > b;
        return a % 3 > b % 3;
    }
};

int main()
{
    priority_queue<int, vector<int>, cmp> q;
    int n, x;
    cin >> n;
    while (n--)
    {
        cin >> x;
        q.push(x);
    }
    while (q.size())
    {
        cout << q.top() << ' ';
        q.pop();
    }
}

/*
int main(){
    priority_queue<int> q;  //input random, output sap xep giam dan
    priority_queue<int, vector<int>, greater<int> > q2;
    priority_queue<int,vector<int>, cmp> q3;

    for(int &x:{2,5,84,3,2,6,8,6,4,1})
        q.push(x);
    while(q.size()){
        q.top();
        q.pop();
    }
}
*/