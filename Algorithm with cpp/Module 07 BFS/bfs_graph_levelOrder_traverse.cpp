#include<bits/stdc++.h>
using namespace std;
const int N= 1e3+5;
vector<int>adjlist[N];
bool visited[N];
int level[N];

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;

    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        cout<<"visiting node : "<<u<<endl;
        for(int v: adjlist[u])
        {
            if(visited[v]== true) continue;
            q.push(v);
            visited[v]=true;
            level[v]=level[u]+1;
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
bfs(1);
for(int i=1;i<=n;i++)
{
    cout<<" level of "<<i<<":"<<level[i]<<endl;
}

    return 0;
}