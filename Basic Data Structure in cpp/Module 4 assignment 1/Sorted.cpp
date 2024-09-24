#include<bits/stdc++.h>
using namespace std;
bool ckSort(int ar[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        if(ar[i]>ar[i+1])
        {
            return false;
        }
    }
    return true;
}
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
        if(ckSort(a,n))
        {
            cout<<"YES"<<endl;
        }
        else
        {
        cout<<"NO"<<endl;
        }
    }
    return 0;
}