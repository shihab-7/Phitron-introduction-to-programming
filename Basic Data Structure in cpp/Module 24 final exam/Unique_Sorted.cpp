#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     set<int>s;
    int n;
    cin>>n;
    while(n--)
    {
        int val;
        cin>>val;
        s.insert(val);
    }
    vector<int>v;
    for(auto it = s.begin() ; it != s.end() ; it++)
    {
        v.push_back(*it);
    }
    reverse(v.begin(),v.end());
    for(int i=0 ; i < v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
   }
    return 0;
}