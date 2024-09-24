#include<bits/stdc++.h>
using namespace std;
const int N=1e3+3;
int adjmat[N][N];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>adjmat[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<"List "<<i<<" "<<": ";
        for(int j=1;j<=n;j++)
        {
            if(adjmat[i][j]==1)
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}