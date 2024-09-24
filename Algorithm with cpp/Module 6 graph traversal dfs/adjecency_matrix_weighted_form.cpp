#include<bits/stdc++.h>
using namespace std;
const int N= 1e3+5;
int adjmat[N][N]; //global array map bananor jonno
int main()
{   
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adjmat[u][v]=w;
        adjmat[v][u]=w;
        /* edge er value k weight bole ,eta 
        neowar jonno w variable niyesi 
        ebong [u][v]=w
         and [v][u]=w korsi
        directed hoile [u][v]=1
        r undirected hoile [u][v]=1 sathe 
        [v][u]=1 hobe*/
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<adjmat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}