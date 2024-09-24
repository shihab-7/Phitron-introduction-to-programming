#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int parent[N];
int parentlevel[N];
void dsu_set(int n)
{
    for(int i=1;i<=n;i++)
    {
        parent[i]=-1;
        parentlevel[i]=0;
    }
}
int find_leader(int node)
{
    while(parent[node]!=-1)
    {
        node=parent[node];
    }
    return node;
}
void dsu_union(int a,int b)
{
    int leaderA=find_leader(a);
    int leaderB=find_leader(b);
    if(leaderA !=leaderB)
    {
        if(parentlevel[leaderA]>parentlevel[leaderB])
        {
            parent[leaderB]=leaderA;
        }
        else if(parentlevel[leaderB]>parentlevel[leaderA])
        {
            parent[leaderA]=leaderB;
        }
        else
        {
            parent[leaderB]=leaderA;
            parentlevel[leaderA]++;
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    dsu_set(n);
    int cnt=0;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        int leaderA= find_leader(a);
        int leaderB= find_leader(b);
        if(leaderA == leaderB)
        {
            cnt++;
        }
        else
        {
            dsu_union(a,b);
        }
    }
    cout<<cnt<<endl;
    return 0;
}