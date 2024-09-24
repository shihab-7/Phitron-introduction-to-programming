#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,w;
        cin>>n>>w;
        int weights[n];
        int values[n];
        for(int i=0;i<n;i++)
        {
            cin>>weights[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>values[i];
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=w;j++)
            {
                if(i==0 || j==0)
                {
                    dp[i][j]=0;
                }
                if(weights[i-1]<=j)
                {
                    dp[i][j]=max(dp[i-1][j-weights[i-1]]+values[i-1],dp[i-1][j]);
                }
                else
                {
                    dp[i][j]= dp[i-1][j];
                }
            }
        }
        cout<<dp[n][w]<<endl;
    }
    return 0;
}