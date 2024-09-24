#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    while(t--)
    {
        int x;
        cin>>x;
        int left=0,right=n-1;
        bool flag=false;
        while(left<=right)
        {
            int midpnt=(left+right)/2;
            if(ar[midpnt]==x)
            {
                flag=true;
            }
            if(x>ar[midpnt])
            {
                left=midpnt+1;
            }
            else
            {
                right=midpnt-1;
            }

        }
        if(flag)cout<<"found"<<endl;
        else cout<<"not found"<<endl;
    }
    return 0;
}