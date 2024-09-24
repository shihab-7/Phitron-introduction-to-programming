#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream x(s);/* we can use this to count word from 
    a sentance or print words seperately*/
    cout<<s<<endl;
    string box;
    /*while(x>>box)
    {
        cout<<box<<endl;
    }*/
    int cnt=0;
    while(x>>box)
    {
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}