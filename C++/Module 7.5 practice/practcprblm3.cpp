#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string word,v;
    cin>>word;
    stringstream x(s);
    int cnt=0;
    while(x>>v)
    {
        if(v==word)
        cnt++;
    }
    cout<<cnt;
    return 0;
}