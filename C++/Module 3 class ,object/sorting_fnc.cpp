#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
    //for lowest to greatest sort we use "sort(a,a+n);"
    sort(a,a+x,greater<int>());
    //for greatest to lowest sort we use a comparison buildin function
    //named "sort(a,a+n,greater<int>());"
    for(int i=0;i<x;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}