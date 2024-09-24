#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stack<char>stk;
        for(int i=0;i<s.size();i++)
        {
            if(stk.empty())
            {
                stk.push(s[i]);
            }
            else if(stk.top()=='A'&&s[i]=='B')
            {
                stk.pop();
            }
            else if(stk.top()=='B'&&s[i]=='A')
            {
                stk.pop();
            }
            else
            {
                stk.push(s[i]);
            }
        }
        if(!stk.empty())
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}