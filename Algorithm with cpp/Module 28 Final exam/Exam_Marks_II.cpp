#include<bits/stdc++.h>
using namespace std;
int dp[10005][10005];
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int need=1000-m;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        dp[0][0]=1;
        for(int i=1;i<=need;i++)
        {
            dp[0][i]=0;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=need;j++)
            {
                if(ar[i-1]<=j)
                    dp[i][j]= dp[i][j-ar[i-1]] || dp[i-1][j];
                else
                    dp[i][j]= dp[i-1][j];
            }
        }
        if(dp[n][need]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}