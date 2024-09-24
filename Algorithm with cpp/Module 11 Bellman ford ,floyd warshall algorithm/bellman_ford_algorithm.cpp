/*dijkstra algorithm can not handle negetive weighted graph 
so for coping with that problem we invent 
Bellman_ford algorithm */


#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int>pii;
const int N=1e5+5;
const int INF= 1e9+7;
//vector<pii> g[N];
vector<pair<pii,int>>list_of_edges;
int d[N];

int n,m;


void bellManFord( int s)
{
    for(int i=1;i<=n;i++) 
    {
        d[i]=INF;
    }
    d[s]=0;
    for(int i=1;i<n;i++)
    {
        //relax all edges
        // for(int u=1;u<=n;u++)
        // {
        //     for(pii vpair: g[u])
        //     {
        //         int v=vpair.first;
        //         int w=vpair.second;

        //         if(d[u]!=INF && d[v]>d[u]+w)
        //         {
        //             d[v]=d[u]+w;
        //         }
        //     }
        // }
        for(auto edge:list_of_edges)
        {
            int u= edge.first.first;
            int v= edge.first.second;
            int w= edge.second;

            if(d[u]!=INF && d[v]>d[u]+w)
            d[v]=d[u]+w;
        }

    }
}
int main()
{
   
    cin>>n>>m;
    while(m--)
    {
        int u,v,w;
        cin>>u>>v>>w;
        //g[u].push_back({v,w});
        list_of_edges.push_back({{u,v},w});
    }

    bellManFord(1);
    for(int i=1;i<=n;i++)
    {
        cout<<"Distance of : "<<i<<" : "<<d[i]<<endl;
    }
    return 0;
}


//hoy list of edges diye korte pari nahoy adjecency list dyeo kora jay


//O(NM)

// NODE <= EDGE HOLE O(n^2)
//complete graph a O(n^3)

// negetive waight cycle thakle bellmanFord algorith kaj kore na
//but ditect korte pare 