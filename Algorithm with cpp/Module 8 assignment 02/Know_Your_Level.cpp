#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+5;
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
    bool root_track=false;
    for(int i=0;i<m;i++)
        {
            int u,v;
            cin>>u>>v;
            if(u==-1)
                {
                    root_track=true;
                    break;
                }
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }
    if(root_track) 
        {
            cout<<-1;
            return 0;
        }
        int a;
        cin>>a;
        if(a==0)
        {
            cout<<0;
        }
        else
        {
            bool shop = false;
        bfs(0);
        for(int i=0;i<N;i++)
        {
            if(level[i]==a)
            {
                cout<<i<<" ";
                shop=true;
            }
        }
            if(!shop) cout<<-1;
        }
    return 0;
}