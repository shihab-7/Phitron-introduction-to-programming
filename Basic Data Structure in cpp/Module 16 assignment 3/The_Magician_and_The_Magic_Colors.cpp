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
        string s;
        cin>>s;
        stack<char>a;
        for(int i=0;i<n;i++)
        {
            if(a.empty())
            {
                a.push(s[i]);
            }
            else
            {
                if(s[i]==a.top())
                {
                    a.pop();
                }
                else if(s[i]=='R'&&a.top()=='B'||s[i]=='B'&&a.top()=='R')
                {
                    a.pop();
                    if(!a.empty()&&a.top()=='P')
                    {
                        a.pop();
                    }
                    else 
                    {
                        a.push('P');
                    }
                }
                else if(s[i]=='R'&&a.top()=='G'||s[i]=='G'&&a.top()=='R')
                {
                    a.pop();
                    if(!a.empty()&&a.top()=='Y') 
                    {
                        a.pop();
                    }
                    else 
                    {
                        a.push('Y');
                    }
                }
                else if(s[i]=='B'&&a.top()=='G'||s[i]=='G'&&a.top()=='B')
                {
                    a.pop();
                    if(!a.empty()&&a.top()=='C') 
                    {
                        a.pop();
                    }
                    else 
                    {
                        a.push('C');
                    }
                }
                else
                {
                    a.push(s[i]);
                }
            }
        }
        stack<char>out;
        while(!a.empty())
            {
                out.push(a.top());
                a.pop();
            }
       while(!out.empty())
       {
        cout<<out.top();
        out.pop();
       }
       cout<<endl;
    }
    return 0;
}