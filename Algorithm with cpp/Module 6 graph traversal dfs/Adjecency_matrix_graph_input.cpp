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
        int u,v;
        cin>>u>>v;
        adjmat[u][v]=1;
        adjmat[v][u]=1;
        //directed hoile [u][v]=1
        //r undirected hoile [u][v]=1 sathe [v][u]=1 hobe
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