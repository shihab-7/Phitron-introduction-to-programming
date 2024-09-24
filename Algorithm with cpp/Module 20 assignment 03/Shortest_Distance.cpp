#include<bits/stdc++.h>
using namespace std;
const int N =105;
const long long int INF= 1e18+7;
long long int d[N][N]; 


void set_up(int n)
{
    for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=n;j++)
    {
        d[i][j]=INF;
        if(i==j)
        {
            d[i][j]=0;
        }
    }
   }
}
void floyd_warshal( int n)
{
   for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    set_up(n);
    while(e--)
    {
        int a,b;
        long long w;
        cin>>a>>b>>w;
        d[a][b]=min(d[a][b],w);
    }
    floyd_warshal(n);
    int q;
    cin>>q;
    while(q--)
    {  
        int x,y;
        cin>>x>>y;
        if(d[x][y]==INF) cout<<-1<<endl;
        else cout<<d[x][y]<<endl;
    }
    return 0;
}