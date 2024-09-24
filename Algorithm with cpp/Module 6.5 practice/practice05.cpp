#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int>adjlist[N];

bool visited[N];
int height[N];

void dfs_height(int u)
{
    visited[u]=true;
    for(int v : adjlist[u])
    {
        if(visited[v]==true) continue;
        dfs_height(v);
        height[u]=max(height[u],height[v]+1);
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
    dfs_height(1);
    cout<<"height of "<<pos<<" "<<"="<<" "<<height[pos];
    return 0;
}