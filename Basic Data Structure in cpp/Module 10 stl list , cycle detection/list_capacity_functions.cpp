#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist(10,1);
    cout<<mylist.max_size()<<" ";
    mylist.clear();
    cout<<mylist.size()<<endl;
    for(int val: mylist)
    {
        cout<<val<<" ";
    }
    mylist.resize(3,100);
    for(int val: mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}