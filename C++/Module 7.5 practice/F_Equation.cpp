#include<bits/stdc++.h>
using namespace std;
long long int seriesSum(int x,int n)
{
    long long int sum=0,power=1;
    for(int i=0;i<=n;i+=2)
    {
        sum+=power;
        power*=x*x;
    }
    return sum;
}
int main()
{
    int x,n;
    cin>>x>>n;
    long long int z=seriesSum(x,n);
    cout<<z-1;
    return 0;
}