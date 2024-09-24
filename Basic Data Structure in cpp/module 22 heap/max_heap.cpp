#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={50,40,45,30,35,42,32,25,20,10};
    int x;
    cin>>x;
    v.push_back(x);
    int crnt_indx = v.size()-1;
    while(crnt_indx != 0)
    {
        int parent_indx = (crnt_indx - 1) / 2;
        if(v[parent_indx] < v[crnt_indx])
            swap(v[parent_indx] , v[crnt_indx]);
        else
            break;
        crnt_indx = parent_indx;
    }
    for(int val: v)
        cout<<val<<" ";
    return 0;
}