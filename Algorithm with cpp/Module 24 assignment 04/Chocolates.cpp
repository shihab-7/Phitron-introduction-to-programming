#include<bits/stdc++.h>
using namespace std;
bool dp[1005][1005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int cbox[n];
        int totalc=0;
        for(int i=0;i<n;i++)
        {
            cin>>cbox[i];
            totalc += cbox[i];
        }
        if(totalc % 2 != 0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int half = totalc/2;
            dp[0][0]=true;
            for(int i=1;i<=half;i++)
            {
                dp[0][i]=false;
            }
            for(int i=1;i<=n;i++)
            {
                for(int j=0;j<=half;j++)
                {
                    if(cbox[i-1]<=j)
                    {
                        dp[i][j] = dp[i-1][j-cbox[i-1]] || dp[i-1][j];
                    }
                    else
                    {
                        dp[i][j]=dp[i-1][j];
                    }
                }
            }
            if(dp[n][half]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    
    return 0;
}