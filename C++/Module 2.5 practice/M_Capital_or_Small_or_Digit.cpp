#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(a>='a'&&a<='z'||a>='A'&&a<='Z')
    {
        cout<<"ALPHA"<<endl;
        if(a>='a'&&a<='z')
        {
            cout<<"IS SMALL";
        }
        else
        cout<<"IS CAPITAL";
    }
    else
    cout<<"IS DIGIT";
    return 0;
}