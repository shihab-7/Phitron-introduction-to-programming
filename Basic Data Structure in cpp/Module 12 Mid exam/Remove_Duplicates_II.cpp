#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>newlist;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)
        break;
        newlist.push_back(val);
    }
    newlist.sort();
    newlist.unique();
    for(int val:newlist)
    {
        cout<<val<<" ";
    }
    return 0;
}