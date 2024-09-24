#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="hello";
    cout<<s<<endl;
    /*for(int i=0;i<s.size();i++)
    cout<<s[i]<<endl;   eita position based for loop*/
    for(char c:s) // s theke akta kore char ber kore c te rakhe
    cout<<c<<endl; //eita string er jonno kaj kore
    return 0;
}