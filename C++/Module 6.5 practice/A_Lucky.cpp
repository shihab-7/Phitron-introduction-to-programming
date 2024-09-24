#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string x;
        cin>>x;
        int sum1=0,sum2=0;
        for(int i=0;i<3;i++)
        {
            sum1+=x[i]-'0';
            sum2+=x[i+3]-'0';
        }
        if(sum1==sum2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}