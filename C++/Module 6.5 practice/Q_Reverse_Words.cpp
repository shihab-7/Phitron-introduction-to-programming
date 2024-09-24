#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream x(s);
    bool first=true;
    while(x>>s)
    {
        reverse(s.begin(),s.end());
        if(!first)
        cout<<" ";
        first=false;
        cout<<s;
    }
    return 0;
}