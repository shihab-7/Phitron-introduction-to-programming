#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+5;
vector<int>adjlist[N];
bool visited[N];
vector<int>track; // connected nodes rakhar jonno
void dfs(int u)
{
    track.push_back(u);
    visited[u]=true;
    for(int v : adjlist[u])
    {
        if(visited[v]) continue;
        dfs(v);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    vector<int> components;
    for(int i=0;i<N;i++)
    {
        if(visited[i]) continue;
        track.clear();
        dfs(i);
        int c=track.size();
        if(c>1)
        {
            components.push_back(c);
        }
    }
    sort(components.begin(),components.end()); //accending order
    for(int val : components)
    {
        cout<<val<<" ";
    }
    return 0;
}