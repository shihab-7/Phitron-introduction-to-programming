#include<bits/stdc++.h>
using namespace std;
const int N= 1e3+5;
vector<int>adjlist[N];
bool visited[N];
bool check_cycle(int u,int parent=-1)
{
    bool has_cycle=false;
    visited[u]=true;
    for(int v:adjlist[u])
    {
        if(v == parent) continue;
        if(visited[v]) return true;
        check_cycle(v,u);
        has_cycle |= check_cycle(v,u);
    }
    return has_cycle;
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

    // if(check_cycle(1,-1)) //1st node hoile parent -1 pathabo
    // cout<<"has cycle"<<endl;
    // else
    // cout<<"no cycle"<<endl;
    bool isCycle= false;
    for(int i=1;i<=n;i++)
    {
        if(visited[i]) continue;
        isCycle|= check_cycle(i);
    }
    if(isCycle) cout<<"has";
    else cout<<"hasn't";
    return 0;
}