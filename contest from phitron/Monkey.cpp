#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(!cin.eof())
    {
        string a;
        getline(cin,a);
        string str="";
        for(char c: a)
        {
            if(c!=' ')
            {
                str+=c;
            }
        }
        sort(str.begin(),str.end());
        cout<<str<<endl;
    }
    return 0;
}