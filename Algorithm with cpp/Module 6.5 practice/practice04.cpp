#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int>adjlist[N];

bool visited[N];
int depth[N];

void dfs_depth(int u)
{
    visited[u]=true;
    for(int v : adjlist[u])
    {
        if(visited[v]==true) continue;
        depth[v]=depth[u]+1;
        dfs_depth(v);
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adjlist[u].push_back(v);
    }
    int pos;
    cin>>pos;
    dfs_depth(1);
    cout<<"Depth of "<<pos<<" "<<"="<<" "<<depth[pos];
    return 0;
}