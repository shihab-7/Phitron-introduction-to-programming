#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }
    stack<int>s;
    while(!q.empty())
    {
        int val=q.front();
        q.pop();
        s.push(val);
    }
    queue<int>q2;
    while(!s.empty())
    {
        int val=s.top();
        s.pop();
        q2.push(val);
    }
    while(!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop();
    }
    return 0;
}