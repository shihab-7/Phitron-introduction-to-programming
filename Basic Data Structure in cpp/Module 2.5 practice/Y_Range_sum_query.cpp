#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    long long int x[a];
    for(int i=0;i<a;i++)
    {
        cin>>x[i];
    }
    long long int y[a];
    y[0]=x[0];
    for(int i=1;i<a;i++)
    {
        y[i]=x[i]+y[i-1];
    }
    while(b--)
    {
        long long l,r,sum=0;
        cin>>l>>r;
        l--;
        r--;
        if(l==0) sum=y[r];
        else
        sum=y[r]-y[l-1];
        cout<<sum<<endl;
    }

    return 0;
}