#include<bits/stdc++.h>
#define pii pair<long int,long int>
using namespace std;
const int N=1e5+5;
const long long int INF= 1e18+7;
vector<pair<pii,int>>list_of_edges;
long long int d[N];

void bellManFord( int s,int n)
{
    for(int i=1;i<=n;i++) 
    {
        d[i]=INF;
    }
    d[s]=0;
    for(int i=1;i<n;i++)
    {
        for(auto edge:list_of_edges)
        {
            int u= edge.first.first;
            int v= edge.first.second;
            int w= edge.second;

            if(d[u]!=INF && d[v]>d[u]+w)
            d[v]=d[u]+w;
        }
    }
}
int check()
{
    int x=0;
    for(auto val : list_of_edges)
    {
        int u=val.first.first;
        int v=val.first.second;
        int w=val.second;
        if(d[u]!=INF && d[u]+w<d[v])
        {
           x=1;
           break;
        }
    }
    return x;
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b,w;
        cin>>a>>b>>w;
        list_of_edges.push_back({{a,b},w});
    }
    int source;
    cin>>source;
    bellManFord(source,n);
    if(check()) cout<<"Negative Cycle Detected"<<endl;
    else
    {
        int t;
        cin>>t;
        while(t--)
        {
            int dst;
            cin>>dst;
            if(d[dst]==INF) cout<<"Not Possible"<<endl;
            else cout<<d[dst]<<endl;
        }
    }
    return 0;
}