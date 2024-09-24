#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x=1,i=0,j=n-1;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            x=0;
            break;
        }
        i++;
        j--;
    }
    if(x==0)
    cout<<"NO";
    else
    cout<<"YES";
    return 0;
}