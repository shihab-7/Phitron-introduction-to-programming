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
        map<int,int>frq;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            frq[x]++;
        }
        int mvs=0;
        for(auto p: frq)
        {
            if(p.second > 1)
            {
                mvs+=p.second-1;
            }
        }
        cout<<mvs<<endl;
    }
    return 0;
}