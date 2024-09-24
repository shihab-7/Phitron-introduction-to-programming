#include<bits/stdc++.h>
#define pi pair<int,int>
using namespace std;
int main()
{
    priority_queue<pi,vector<pi>,greater<pi>>pq;
    int t;
    cin>>t;
    while(t--)
    {
        int n,e;
        cin>>n>>e;
        pq.push({n,e});
    }
    while(!pq.empty())
    {
        cout<<pq.top().first<<" "<<pq.top().second<<endl;
        pq.pop();
    }
    return 0;
}