#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int prfxsm[n];
    prfxsm[0]=a[0];
    for(int i=1;i<n;i++)
    {
        prfxsm[i]=a[i]+prfxsm[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<prfxsm[i]<<" ";
    }
    return 0;
}