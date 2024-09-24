#include<bits/stdc++.h>
using namespace std;
long long int fibo(long long int n)
{
    //if(n<=1) return 1;
    if(n==0 || n==1) return 1;
    long long int ans1=fibo(n-1);
    long long int ans2=fibo(n-2);  //recursion 2 bar function call korar jonno cmplexity 2^n
    // joto bar recursive function call hobe complexity toto^n
    return ans1+ans2;
}
int main()
{
    long long int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}