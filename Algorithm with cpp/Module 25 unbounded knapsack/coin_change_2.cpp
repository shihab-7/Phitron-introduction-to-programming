#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int w[n];
    for(int i=0;i<n;i++)
    {
        cin>>w[i];
    }
    int s;
    cin>>s;
    int dp[n+1][s+1];
    dp[0][0]=0;
    for(int i=1;i<=s;i++) dp[0][i]=INT_MAX-1;//garbeg vlue avoid korte -1 kora hoise
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=s;j++)
        {
            if(w[i-1]<=j)
            {
                dp[i][j]= min(dp[i][j-w[i-1]]+1 , dp[i-1][j]);
            }
            else
            {
                dp[i][j]= dp[i-1][j];
            }
        }
    }
    cout<<dp[n][s]<<endl;
    if(dp[n][s]==INT_MAX-1) cout<<"not possible"<<endl;
    else cout<<"possible"<<endl;
    return 0;
}