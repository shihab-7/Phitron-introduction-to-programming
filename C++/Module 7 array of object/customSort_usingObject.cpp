#include<bits/stdc++.h>
using namespace std;
class customSort
{
    public:
     int cnt;
     char c;
};
bool cmp(customSort p,customSort q)
{
    if(p.cnt>q.cnt) return true;
    else return false;
}
int main()
{
    int n;
    cin>>n;
    customSort frq[26];
    for(int i=0;i<26;i++)
    {
        frq[i].c=(i+'a');
        frq[i].cnt=0;
    }
    for(int i=0;i<n;i++)
    {
        char x;
        cin>>x;
        frq[x-'a'].cnt++;
    }
    sort(frq,frq+26,cmp);
    for(int i=0;i<26;i++)
    {
        if(frq[i].cnt>0)
        {
            for(int j=0;j<frq[i].cnt;j++)
            {
                cout<<frq[i].c;
            }
        }
    }
    return 0;
}