#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int size,int val)
{
    int l=0;
    int r=size-1;

    while(l<=r)
    {
        int mid=(l+r)/2;

        if(arr[mid]==val)
        return mid;
        else if(arr[mid]>val)
        r=mid-1;
        else
        l=mid+1;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int pos=search(arr,n,x);
    if(pos!=-1)cout<<pos<<endl;
    else cout<<"Not Found"<<endl;
    return 0;
}