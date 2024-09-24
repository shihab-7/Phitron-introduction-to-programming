#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,z,sum,subs,mul;
    char x,y;
    cin>>a>>x>>b>>y>>z;
    sum=a+b;
    subs=a-b;
    mul=a*b;
    if((z==sum)||(z==subs)||(z==mul))
    cout<<"Yes";
    else
    {
        if(x=='+')
        {
            cout<<sum;
        }
        if(x=='-')
        {
            cout<<subs;
        }
        if(x=='*')
        {
            cout<<mul;
        }
    }
    return 0;
}