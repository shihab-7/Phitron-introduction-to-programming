#include<bits/stdc++.h>
using namespace std;
void mergesort(int a[],int b[],int c[],int sz1,int sz2)
{
    int x=0,y=0,z=0;
    while(x < sz1 && y < sz2)
    {
        if(a[x]>=b[y])
        {
            c[z]=a[x++];
        }
        else
        {
            c[z]=b[y++];
        }
        z++;
    }
    while(x < sz1)
    {
        c[z]=a[x];
        x++;
        z++;
    }
    while(y < sz2)
    {
        c[z]=b[y];
        y++;
        z++;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int c[n+m];
    mergesort(a,b,c,n,m);
    for(int i=0;i<m+n;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}