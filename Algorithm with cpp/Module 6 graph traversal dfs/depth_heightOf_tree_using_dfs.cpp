#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+5;
vector<int> adjlist[N]; /*dfs with adjecency list */

bool visited[N]; /* this is a tracking array
 which check a node is repeating or not */

int depth[N];
int height[N];

void dfs(int u)
{
    visited[u]=true;
    
    //cout<<"visiting node:"<<u<<endl;

    for(int v: adjlist[u])
    {

        if(visited[v]== true) continue;
        depth[v]= depth[u]+1;
        dfs(v);
        height[u]=max(height[u],height[v]+1);
    }
}

int main()
{
    int n,m;
    cin>> n >> m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>> u >> v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    dfs(1);
    for(int i=1;i<=n;i++)
    {
        cout<<"depth of node "<<i<<": "<<depth[i]<<endl;
    }
    cout<<"**************"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<"height of node "<<i<<": "<<height[i]<<endl;
    }
    return 0;
}