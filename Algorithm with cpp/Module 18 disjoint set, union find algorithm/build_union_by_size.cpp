#include<bits/stdc++.h>
using namespace std;
int parent[1000];
int parentSize[1000];
void dsu_set(int n)
{
    for(int i=1;i<=n;i++)
    {
        parent[i]=-1;
        parentSize[i]=1;
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
        if(parentSize[leaderA] > parentSize[leaderB])
        {
            parent[leaderB] = leaderA;
            parentSize[leaderA] += parentSize[leaderB];
        }
        else
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
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
    cout<<find_leader(2);
    return 0;
}