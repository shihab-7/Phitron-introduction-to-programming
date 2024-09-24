#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        string s,x;
        cin>>s>>x;
        while(s.find(x)!=-1)
        {
            s.replace(s.find(x),x.length(),"$");
        }
        cout<<s<<endl;
    }
    return 0;
}