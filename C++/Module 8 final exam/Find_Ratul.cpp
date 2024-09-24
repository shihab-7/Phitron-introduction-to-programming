#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int x=0;
    stringstream z(s);
    string word;
    while(z>>word)
    {
        if(word=="Ratul")
        x=1;
    }
    if(x)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}