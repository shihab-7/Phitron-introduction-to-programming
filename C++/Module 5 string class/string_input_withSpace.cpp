#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x; /*string input neowar age integer input nile
    getline()enter k input niye ney baki gula r ney na */
    cin.ignore(); //eta use korle r vejal kore na getline
    //othoba getchar(); o use kora jay karon kisu compiler cin.ignore(); ney na
    string s;
    //cin>>s; //cin can't take input with space
    /*cin.getline(s,100); char s[100] type er string input er jonno*/
    getline(cin,s); //space soho input neowar jonno
    cout<<s<<endl;
    cout<<x<<endl;
    cout<<s.size();
    return 0;
}