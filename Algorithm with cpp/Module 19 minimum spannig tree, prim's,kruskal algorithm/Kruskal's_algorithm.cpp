#include<bits/stdc++.h>
using namespace std;
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
    vector<Edge>v;
    vector<Edge>ans;
    dsu_set(n);
    while(e--)
    {
        int a,b,w;
        cin>>a>>b>>w;
        v.push_back(Edge(a,b,w));
    }
    sort(v.begin(),v.end(),cmp);
    for(Edge val: v)
    {
        int a= val.a;
        int b= val.b;
        int w= val.w;
        int leaderA= find_leader(a);
        int leaderB= find_leader(b);
        if(leaderA == leaderB) continue;
        ans.push_back(val);
        dsu_union(a,b);
    }
    for(Edge val: ans)
    {
        cout<<val.a<<" "<<val.b<<" "<<val.w<<endl;
    }
    return 0;
}