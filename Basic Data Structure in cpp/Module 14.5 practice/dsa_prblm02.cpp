#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    queue<int>q;
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        q.push(y);
    }
    if(s.size()!=q.size())
    {
        cout<<"NO";
    }
    else
    {
        bool flag=true;
        while(!s.empty()&&!q.empty())
        {
            if(s.top()!=q.front())
            {
                flag=false;
            }
            s.pop();
            q.pop();
        }
        if(flag)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    return 0;
}