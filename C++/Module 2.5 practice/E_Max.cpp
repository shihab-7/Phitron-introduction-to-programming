#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=INT_MIN;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)
    x=max(x,a[i]);
    cout<<x;
    return 0;
}