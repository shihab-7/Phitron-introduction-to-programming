#include<bits/stdc++.h>
using namespace std;
int find1(int a[],int n,int val)
{
    int l=0,r=n-1,ans=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==val)
        {
            ans=mid;
            r=mid-1;
        }
        else if(a[mid]>val)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return ans;
}
int find2(int a[],int n,int val)
{
    int l=0,r=n-1,ans=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==val)
        {
            ans=mid;
            l=mid+1;
        }
        else if(a[mid]>val)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int val;
    cin>>val;

    int x=find1(ar,n,val);
    int y=find2(ar,n,val);

    if(x!=y) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}