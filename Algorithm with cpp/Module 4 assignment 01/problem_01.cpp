#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+7;
int nums[N];
void merge(int l, int r, int mid)
{
    int left= mid-l+1;
    int L[left+1];

    int right= r-mid;
    int R[right+1];

    for(int i=l,j=0; i<=mid;i++,j++)
    {
        L[j]=nums[i];
    }
    for(int i=mid+1,j=0; i<=r;i++,j++)
    {
        R[j]=nums[i];
    }

    L[left]= INT_MIN;
    R[right]= INT_MIN;

    int x=0,y=0;
    for( int i=l ; i<=r ; i++)
    {
        if(L[x] >= R[y])
        {
            nums[i]=L[x++];
        }
        else
        {
            nums[i]=R[y++];
        }
    }
}
void mergesort(int l, int r)
{
    if(l==r) return;
    int mid=(l+r)/2;

    mergesort(l,mid);
    mergesort(mid+1,r);

    merge(l,r,mid);
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i < n;i++)
    {
        cin>>nums[i];
    }
    mergesort(0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}