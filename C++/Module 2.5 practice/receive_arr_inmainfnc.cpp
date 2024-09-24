#include<bits/stdc++.h>
using namespace std;
int *getarry(int x)
{
    int *c=new int[x];
    for(int i=0;i<x;i++)
    cin>>c[i];
    return c;
}
int main()
{
    int n;
    cin>>n;
    int *z =getarry(n);
    for(int i=0;i<n;i++)
    cout<<z[i]<<" ";
    return 0;
}