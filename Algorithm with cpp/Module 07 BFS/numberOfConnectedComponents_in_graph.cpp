#include<bits/stdc++.h>
using namespace std;
const int N= 1e3+5;
vector<int>adjlist[N];
bool visited[N];
void dfs(int u)
{
    visited[u]=true;
    for(int v:adjlist[u])
    {
        if(visited[v]==true) continue;
        dfs(v);
    }
}

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;

    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int v: adjlist[u])
        {
            if(visited[v]== true) continue;
            q.push(v);
            visited[v]=true;
        }

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

    int c1=0,c2=0;
    // for(int i=1;i<=n;i++)
    // {
    //     if(visited[i]) continue;
    //     dfs(i);
    //     c1++;
    // }
    // cout<<endl;
    for(int i=1;i<=n;i++)
    {
        if(visited[i]) continue;
        bfs(i);
        c2++;
    }
    cout<<"Number of connected components : "<<" bfs:"<<c2<<endl;
    return 0;
}