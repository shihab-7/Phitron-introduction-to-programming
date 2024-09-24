#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    queue<string>s;
    while(q--)
    {
        int n;
        cin>>n;
        if(n==0)
        {
            string nm;
            cin>>nm;
            s.push(nm);
        }
        else if(n==1&&!s.empty())
        {
            cout<<s.front()<<endl;
            s.pop();
        }
        else if(s.empty())
        {
            cout<<"Invalid"<<endl;
        }
    }
    return 0;
}