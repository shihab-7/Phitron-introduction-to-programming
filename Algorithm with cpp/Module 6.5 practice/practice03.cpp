#include<bits/stdc++.h>
using namespace std;
const int N=1e3+3;
int adjmat[N][N];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adjmat[u][v]=1;
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