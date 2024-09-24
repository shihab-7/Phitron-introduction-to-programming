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
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    vector<int>s(b,b+n);
    vector<int>x(a,a+n);
    s.insert(s.end(),x.begin(),x.end());
    for(int i=0;i<n+n;i++)
    {
        cout<<s[i]<<" ";
    }
    return 0;
}