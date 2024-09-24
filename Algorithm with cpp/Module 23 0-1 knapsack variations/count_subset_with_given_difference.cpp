#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    int difference;
    cin>>difference;
    int need=(s+difference)/2;
    bool dp[n+1][need+1];
    dp[0][0]=true;
    for(int i=1;i<=need;i++)
    {
        dp[0][i]=false;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=need;j++)
        {
            if(a[i-1]<=j)
            {
                dp[i][j]= dp[i-1][j-a[i-1]] + dp[i-1][j];
            }
            else
            {
                dp[i][j]= dp[i-1][j];
            }
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(dp[i][need])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}