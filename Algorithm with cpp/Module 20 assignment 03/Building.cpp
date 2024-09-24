#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int parent[N];
int parentSize[N];
class Edge
{
    public:
        int a,b,w;
    Edge(int a,int b,int w)
    {
        this->a=a;
        this->b=b;
        this->w=w;
    }
};
 bool cmp(Edge a,Edge b)
{
    return a.w < b.w;
}
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
        node=parent[node];
    }
    return node;
}
void dsu_union(int a,int b)
{
    int leaderA=find_leader(a);
    int leaderB=find_leader(b);
    if(leaderA!=leaderB)
    {
        if(parentSize[leaderA]>parentSize[leaderB])
        {
            parent[leaderB]=leaderA;
            parentSize[leaderA]+=parentSize[leaderB];
        }
        else
        {
            parent[leaderA]=leaderB;
            parentSize[leaderB]+=parentSize[leaderA];
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    vector<Edge>v1; 
    vector<Edge>v2;
    dsu_set(n);
    while(e--)
    {
        int a,b,w;
        cin>>a>>b>>w;
        v1.push_back(Edge(a,b,w));
    }
    sort(v1.begin(),v1.end(),cmp);
    for(Edge val: v1)
    {
        int a= val.a;
        int b= val.b;
        int leaderA= find_leader(a);
        int leaderB= find_leader(b);
        if(leaderA == leaderB) continue;
        v2.push_back(val);
        dsu_union(a,b);
    }
    long long cost=0;
    for(Edge val: v2)
    {
        cost+=(long long)val.w;
    }
    if(v2.size()==n-1) cout<<cost<<endl;
    else cout<<"-1"<<endl;
    return 0;
}