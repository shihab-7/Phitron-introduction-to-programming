#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+5;
vector<pair<int,int>> adjlist[N]; 
/*vector er vitor pair banaite hobe 
edge er value mane weight add korar jonne,
global vector map bananor jonno
*/

int main()
{   
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adjlist[u].push_back({v,w}); //jodi directional hoy tahole sudhu akta push_back
        adjlist[v].push_back({u,w});// 2 ta push_back korte hoy jodi undirected hoy
    }

    for(int i=1;i<=n;i++)
    {
        cout<<"List "<<i<<" : ";
        for(pair<int,int> j : adjlist[i])
        {
            cout<<"("<<j.first<<","<<j.second<<"),";
        }
        cout<<endl;
    }
    return 0;
}