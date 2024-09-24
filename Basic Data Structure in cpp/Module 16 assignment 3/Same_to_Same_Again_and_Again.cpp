#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> a;
    queue <int> b;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        a.push(val);
    }
    for(int i=0;i<m;i++)
    {
        int val;
        cin>>val;
        b.push(val);
    }
    bool flag  = true;
    if(a.size()!=b.size())
    {
        flag = false;
    }
    else
    {
        while(!a.empty() && !b.empty())
        {
            if(a.top()!=b.front())
            {
                flag = false;
            } 
            a.pop();
            b.pop();
        }
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}