#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int cnt=0;
    bool word=false;

    for(char c:s)
    {
        if(isalpha(c)>0)
        {
            if(word==false)
            {
                cnt++;
            }
            word=true;
        }
        else 
            word=false;
    }
    cout<<cnt;
    return 0;
}