#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

const int N = 1005;
const int INF= 1e9+10;
vector<pii>adjlist[N];
vector<int>dist(N,INF);
vector<bool>visited(N);

void dijkstra( int source)
{
    priority_queue<pii,vector<pii>,greater<pii>>pq;

    dist[source]=0;
    pq.push({dist[source],source});

    while(!pq.empty())
    {
        int u= pq.top().second;
        pq.pop();
        visited[u]=true;
        for( pii val : adjlist[u])
        {
            int v= val.first;
            int w= val.second;

            if(visited[v]) continue;

            if(dist[v] > dist[u] + w )
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;

        adjlist[a].push_back({b,w});
        adjlist[b].push_back({a,w});

    }
    int source;
    cin>>source;
    dijkstra(source);
    int t;
    cin>>t;
    while(t--)
    {
        visited.clear();

        int d,dw;
        cin>>d>>dw;
        
        if(dist[d]<=dw)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    return 0;
}