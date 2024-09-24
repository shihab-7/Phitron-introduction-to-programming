#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
long long int save[N];
long long int fibo(int n)
{
    if(n==0 || n==1) return 1;
    //memoization
    if(save[n] != -1)
    {
        return save[n];
    }
    long long int ans1=fibo(n-1);/*recusion call gulo agei 
    array te save kore rakhle pore r recursion call hoy na*/
    /* recursion bar bar akoi value er jonno call na howay 
    code er complexity direct O(2^n) theke O(n) a neme ashe*/
    long long int ans2=fibo(n-2);
    save[n]=ans1+ans2;
    return save[n];
}
int main()
{
    long long int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        save[i]=-1;
    }
    cout<<fibo(n);
    return 0;
}