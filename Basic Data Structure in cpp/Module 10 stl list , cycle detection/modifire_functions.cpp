#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,30,40,50};
    list<int>newlist;
    newlist=mylist; //we can copy like this
    //or newlist.assign(mylist.begin(),mylist.end())
    newlist.push_back(100);
    newlist.push_front(200);
    newlist.pop_back();
    newlist.pop_front();
    newlist.insert(next(newlist.begin(),2),100);
    replace(newlist.begin(),newlist.end(),10,1000);
    //next(lst.begin(),2) works like a shortcut loop
    newlist.erase(next(newlist.begin(),3));
    auto it=find(newlist.begin(),newlist.end(),10);
    for(int val: newlist)
    {
        cout<<val<<" ";
    }

    //find function k deowa value khuje na paile last value return kore
    if(it==newlist.end())
    cout<<"found";
    else
    {
        cout<<"not found";
    }
    return 0;
}