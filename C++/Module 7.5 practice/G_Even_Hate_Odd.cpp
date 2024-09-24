#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,evn=0,odd=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            evn++;
            else
            odd++;
        }
        if(n%2==1)
        cout<<"-1"<<endl;
        else
        cout<<abs(evn-odd)/2<<endl;   
    }
    return 0;
}