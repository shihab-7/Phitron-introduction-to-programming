#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+5;
vector<int>adjlist[N];
bool visited[N];
int level[N];
int cnt=0;
void dfs(int u)
{   
    cnt++;
    visited[u]=true;
    for(int v: adjlist[u])
        {
            if(visited[v]) continue;
            dfs(v);
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
        adjlist[v].push_back(u);
    }
    int x;
    cin>>x;
    dfs(x);
    cout<< cnt-1<<endl;
    return 0;
}