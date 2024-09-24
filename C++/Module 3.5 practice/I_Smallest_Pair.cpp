#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int sum,mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
               sum=a[i]+a[j]+j-i;
               mn= min(mn,sum);
            }
        }
        cout<<mn<<endl;;
    }
    return 0;
}