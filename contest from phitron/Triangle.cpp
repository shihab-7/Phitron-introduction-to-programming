#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if( (a>=0 && b>=0 && c>=0) && (a==b && b==c) && (a+b > c && a+c > b && b+c > a))
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    return 0;
}