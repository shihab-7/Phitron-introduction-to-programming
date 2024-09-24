#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    for(int i=0;i<3;i++)
    cin>>a[i];
    int x=INT_MAX,y=INT_MIN;
    for(int i=0;i<3;i++)
    {
        x=min(x,a[i]);
        y=max(y,a[i]);
    }
    cout<<x<<" "<<y;
    return 0;
}