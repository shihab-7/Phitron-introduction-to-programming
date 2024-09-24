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
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int x;
    cin>>x;
    vector<int>new_ar;
    for(int i=0;i<x;i++)
    {
        new_ar.push_back(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        new_ar.push_back(b[i]);
    }
    for(int i=x;i<n;i++)
    {
        new_ar.push_back(a[i]);
    }
    for(int i=0;i<new_ar.size();i++)
    {
        cout<<new_ar[i]<<" ";
    }
    return 0;
}