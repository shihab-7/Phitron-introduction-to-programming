#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,ans=0;
        cin>>x;
        int cnt[26]={0};
        string s;
        cin>>s;
        for(int i=0;i<x;i++)
        {
            if(cnt[s[i]-'A']==0)
                ans++;
            cnt[s[i]-'A']++;
                    ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}