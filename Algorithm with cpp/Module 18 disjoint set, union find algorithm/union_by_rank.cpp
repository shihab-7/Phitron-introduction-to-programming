#include<bits/stdc++.h>
using namespace std;
int parent[1000];
int parentLevel[1000];
void dsu_set(int n)
{
    for(int i=1;i<=n;i++)
    {
        parent[i]=-1;
        parentLevel[i]=0;
    }
}
int find_leader(int node)
{
    while(parent[node]!=-1)
    {
        node = parent[node];
    }
    return node;
}
void dsu_union(int a,int b)
{
    int leaderA = find_leader(a);
    int leaderB = find_leader(b);
    if(leaderA != leaderB)
    {
        if(parentLevel[leaderA] > parentLevel[leaderB])
        {
            parent[leaderB] = leaderA;
        }
        else if(parentLevel[leaderB] > parentLevel[leaderA])
        {
            parent[leaderA] = leaderB;
        }
        else
        {
            parent[leaderB]=leaderA;
            parentLevel[leaderA]++;
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    dsu_set(n);
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        dsu_union(a,b);
    }
    cout<<find_leader(3);
    return 0;
}