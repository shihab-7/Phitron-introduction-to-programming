#include<stdio.h>
long long int fct(long long int a)
{
    if(a==0)
    {
        return 1;
    }
    return a*fct(a-1);
}
int main()
{
   long long int n;
    scanf("%lld",&n);
    printf("%lld",fct(n));
    return 0;
}