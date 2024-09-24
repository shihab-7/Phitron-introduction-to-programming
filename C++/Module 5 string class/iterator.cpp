#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string :: iterator x;
    for(string ::iterator x=s.begin();x<s.end();x++) 
    //normal char iteration will not work here
    cout<<*x<<endl; 
    /*always need to derefarence because string is like 
    a pointer datatype*/
    return 0;
}