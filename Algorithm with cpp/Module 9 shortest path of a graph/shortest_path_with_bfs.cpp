#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int level[N];
int visited[N];

int parent[N];

vector<int>adjlist[N];
void bfs(int u)
{
    queue<int>q;
    q.push(u);
    visited[u]=true;
    level[u]=0;
    parent[u]=-1;

    while(!q.empty())
    {
        int s= q.front();
        q.pop();

        for(int v: adjlist[s])
        {
            if(visited[v]==true) continue;
            q.push(v);
            visited[v]=true;
            level[v]=level[s]+1;
            parent[v]=s;
        }
    }

}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adjlist[a].push_back(b);
        adjlist[b].push_back(a);
    }
    
    int source,destination;
    cin>>source>>destination;

    bfs(source);

    cout<<"Distance : "<<level[destination]<<endl;

    // for(int i=1;i<=n;i++)
    // {
    //     cout<<"parent of "<<i<<" : "<<parent[i]<<endl;
    // }

    vector<int> path;
    int current =destination;
    while(current != -1)
    {
        path.push_back(current);
        current = parent[current];
    }
    reverse(path.begin(),path.end());

    cout<<"Path : ";
    for(int node : path)
    {
        cout<<node<<" ";
    }
    
    return 0;
}