#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt[26]={0};
    cin>>n;
    while(n--)
    {
        char s;
        cin>>s;
        cnt[s-'a']++;
    }
    for(int i=0;i<26;i++)
        for(int j=0;j<cnt[i];j++)
            cout<<char(i+'a');
    return 0;
}