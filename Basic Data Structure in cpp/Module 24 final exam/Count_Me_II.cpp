#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int> count;
        while(n--)
        {
            int val;
            cin>>val;
            count[val]++;
        }
        int res=0,mx=0;
        for(auto num : count)
        {
            if(num.second>mx || (num.second == mx && num.first>res))
            {
                res=num.first;
                mx=num.second;
            }
        }
        cout<<res<<" "<<mx<<endl;
    }
    return 0;
}