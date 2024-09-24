#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+5;
vector<int> adjlist[N]; /*dfs with adjecency list */

bool visited[N]; /* this is a tracking array
 which check a node is repeating or not */
void dfs(int u)
{
    visited[u]=true;
    cout<<"visiting node:"<<u<<endl;
    /* section 1
    actions just after entering node u*/

    for(int v: adjlist[u])
    {

        if(visited[v]== true) continue;

        /*section 2
        actions before entering a new neighbor*/
        dfs(v);

        /*section 3
        actions after exiting a neighbor*/
    }
    /* section 4
    actions before exiting node u*/
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
    // cout<< "visited status:"<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<visited[i]<<" "<<endl;
    // }
    return 0;
}