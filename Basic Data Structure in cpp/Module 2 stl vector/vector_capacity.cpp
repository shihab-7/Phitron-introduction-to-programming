#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    //cout<<v.max_size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;
    v.push_back(20); //push_back fnc use to add value inside vector
    cout<<v.capacity();

    return 0;
}